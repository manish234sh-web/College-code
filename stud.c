#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
    int choose,r,found=0,d=1,result,roll_h=0,roll_l=0,count=0;
    float sum=0,high=0,lowest=0;
    char h_name[50],l_name[50];
    struct student{
        char name[50];
        int roll;
        float  marks ;
    }s;
    struct student *u=&s;
    struct student su;
    struct student *si=&su;
    FILE *fp=NULL,*gp=NULL;
    printf("==================================================\n");
    printf("        STUDENT RECORD MANAGEMENT SYSTEM          \n");
    printf("==================================================\n");
    while(1){
       printf("--------------------------------------------------\n");
       printf("1. Add New Student Record\n");
       printf("2. Display All Student Records\n");
       printf("3. Search Student Record\n");
       printf("4. Update Student Marks/Info\n");
       printf("5. Delete Student Record\n");
       printf("6. Exit\n");
       printf("7. Delete all record\n");
       printf("8. View Class Statistics\n");
       printf("--------------------------------------------------\n");
       printf("Enter your choice (1-8): ");
       scanf("%d",&choose);
       printf("\n");

       switch(choose){
        case 1 :
             fp=fopen("student.bin","ab");
             if(fp==NULL){
                printf("file opening failed");
                return 0;
               }
             printf("enter student detail\n");
             printf("enter roll number\n");
             scanf("%d",&s.roll);
             printf("enter name\n");
             getchar();
             fgets(u[0].name,50,stdin);
             printf("enter marks\n");
             scanf("%f",&s.marks);
             fwrite(u,sizeof(struct student),1,fp);
             fclose(fp);
             break;
        case 2 : fp=fopen("student.bin","rb");
                 if(fp==NULL){
                    printf("error while opening\n");
                    return 1;
                  }
                 if(fread(si,sizeof(struct student),1,fp)!=1){
                    printf("no record found\n");
                    rewind(fp);
                    break;
                   }
                 rewind(fp);
                 while(fread(si,sizeof(struct student),1,fp)==1){
                
                 printf("roll number %d\nname %smarks %f\n=========================\n",si->roll,si->name,si->marks);
                 }
                
                 
                 fclose(fp);
                 break;
        case 3 : fp=fopen("student.bin","rb");
                 if(fp==NULL){
                    return 1;
                  }
                if(fread(si,sizeof(struct student),1,fp)!=1){
                    printf("no record found\n");
                    rewind(fp);
                   break;
                  }
                rewind(fp);
                printf("enter student roll number to search \n");

                scanf("%d",&r);
                while(fread(si,sizeof(struct student),1,fp)==1){
                //  fread(t,sizeof(int),1,fp);
                 if(r==si->roll){
                    found=1;
                    printf("roll number %d \nname %smarks %f\n",su.roll,su.name,su.marks);
                 }
                }
                 if(found==0){
                    printf("student not found \n");
                 }
                 fclose(fp);
                 found =0;
                 break;

        case 4 : fp=fopen("student.bin","rb+");
                 if(fp==NULL){
                    printf("file opening failed");
                    return 1;
                 }
                 if(fread(si,sizeof(struct student),1,fp)!=1){
                    printf("no record found\n");
                    rewind(fp);
                    break;
                 }
                 rewind(fp);
                 printf("enter roll number for which student need to update marks\n");
                 scanf("%d",&r);
                 while(fread(si,sizeof(struct student),1,fp)==1){
                //  fread(t,sizeof(int),1,fp);
                 if(r==si->roll){
                    found=1;
                    printf("enter updated marks\n");
                    scanf("%f",&su.marks);
                    fseek(fp,-sizeof(struct student),1);
                    fwrite(si,sizeof(struct student),1,fp);
                    break;

                  }
                }
                if(found==0){
                  printf("student not found\n");
                }
                 
                 fclose(fp);
                 found=0;
                 break;
         case 5 :  gp=fopen("temp.bin","wb");
                   if(gp==NULL){
                    printf("error while opening\n");
                    return 1;
                  }
                  fp=fopen("student.bin","rb+");
                   if(fp==NULL){
                    printf("error while opening\n");
                    return 1;
                  }
                  if(fread(si,sizeof(struct student),1,fp)!=1){
                    printf("no record found\n");
                    rewind(fp);
                    break;
                 }
                 rewind(fp);
                  printf("enter roll no. to delete student\n");
                  scanf("%d",&r);
                  while(fread(si,sizeof(struct student),1,fp)==1){ 
                    
                     if(r!=si->roll){
                       fwrite(si,sizeof(struct student),1,gp);
                     }
                  }
                  fclose(fp);
                  fclose(gp);
                  d=remove("student.bin");
                  
                  if(d!=0){
                     printf("deletion unsuccessful\n");
                     return 1;
                  }
                  rename("temp.bin","student.bin");
                  d=1;
                  found=0;
                  break;
         case 6 : printf("exiting program.......");
                 if(fp != NULL)
                  {
                    fclose(fp);
                  }
                 fp=NULL;
                 return 1;

         case 7 :printf("Deleting all records...\n");
                result = remove("student.bin");
                  if(result == 0)
                 {
                   printf("All records deleted successfully.\n");
                 }
                 if(result!=0)
                 {
                  printf("No records found or deletion failed.\n");
                  fp=fopen("student.bin","wb");
                  if(fp==NULL){
                     printf("un");
                     return 0;
                  }
                  }
                  
                  fclose(fp);
                  
                
                 break;
         case 8 : fp=fopen("student.bin","rb");
                  if(fp==NULL){
                     printf("failed(erorr c7)");
                     break;
                  }
                  if(fread(si,sizeof(struct student),1,fp)!=1){
                    printf("no record found\n");
                    rewind(fp);
                    break;
                 }
                  fread(si,sizeof(struct student),1,fp);
                  high=si->marks;
                  lowest=si->marks;
                  rewind(fp);
                  while(fread(si,sizeof(struct student),1,fp)==1){

                     sum=sum+si->marks;
                     if(high<=si->marks){
                        // high=si->marks;
                        // roll_h=si->roll;
                        strcpy(h_name,su.name);
                        // printf("%s",su.name);
                     }
                     if(lowest>si->marks){
                        // lowest=su.marks;
                        // roll_l=su.roll;
                        strcpy(l_name,su.name);
                     }
                     count++;
                  }
                  printf("total students : %d\n",count);
                  printf("average of marks(all students) = %f\n",sum/count);
                  if(count>2){
                    printf("highest mark student\n");
                    printf("%s",h_name);
                    printf("lowest mark student\n");
                    printf("%s",l_name);
                  }
                  fclose(fp);
                  count=0;
                  break;       
         default : printf("wrong input\n");
                   break;             
       }
    }
}