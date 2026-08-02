#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
    int k,r,found=0,o=1,c=0,i;
    struct student{
        char name[50];
        int roll;
        float  marks ;
    }s;
    struct student *u=&s;
    struct student su[c];
    struct student *si=su;
    FILE *fp;
    fp=fopen("student.bin","ab");
    if(fp==NULL){
        printf("file opening failed");
        return 0;
    }
    printf("==================================================\n");
    printf("        STUDENT RECORD MANAGEMENT SYSTEM          \n");
    printf("==================================================\n");
    while(1){

    printf("1. Add New Student Record\n");
    printf("2. Display All Student Records\n");
    printf("3. Search Student Record\n");
    printf("4. Update Student Marks/Info\n");
    printf("5. Delete Student Record\n");
    printf("6. View Class Statistics\n");
    printf("7. Exit\n");
    printf("--------------------------------------------------\n");
    printf("Enter your choice (1-7): ");
    scanf("%d",&k);

    switch(k){
        case 1 : do
            {
                 printf("enter student detail\n");
                 printf("enter roll number\n");
                 scanf("%d",&s.roll);
                 printf("enter name\n");
                 getchar();
                 fgets(u[0].name,50,stdin);
                 printf("enter marks");
                 scanf("%f",&s.marks);
                 fwrite(u,sizeof(struct student),1,fp);
                 printf("want to add more student 1/0");
                 scanf("%d",&o);
                 c++;
                 fclose(fp);
            } while (o==1);
                 break;
        case 2 : fp=fopen("student.bin","rb");
                 if(fp==NULL){
                    printf("error while opening\n");
                    return 1;
                 }
                //  if(fp==EOF){
                //     printf("no record found");
                //     return 1;
                 
                 for(i=0;i<c;i++){
                 fread(si,sizeof(struct student),c,fp);
                 printf("roll number %d\n,name %s,marks %f\n",si->roll,si->name,si->marks);
                 si++;
                 }
                 fclose(fp);
                 break;
        case 3 : fp=fopen("student.bin","rb");
                 if(fp==NULL){
                    return 1;
                 }
                //  if(fp==EOF){
                //     printf("no record found\n enter record first");
                //     fclose(fp);
                //     return 1;
                //  }
                printf("enter student roll number to search");

                 scanf("%d",&r);
                 if(r==u[0].roll){
                    found=1;
                    printf("roll number %d \nname %smarks %f\n",s.roll,s.name,s.marks);
                 }
                 if(found==0){
                    printf("student not found");
                 }
                 fclose(fp);
                 break;

        case 4 : fp=fopen("student.bin","wb");
                 if(fp==NULL){
                    printf("file opening failed");
                    return 1;
                 }
                 printf("enter roll number for which student need to update marks\n");
                 scanf("%d",&r);
                 printf("enter updated marks\n");
                 scanf("%f",&s.marks);
                 
                 fwrite(u,sizeof(struct student),1,fp);
                 fclose(fp);
                 break;
        case 5 : printf("exiting program.......");
                 fclose(fp);
                 fp=NULL;
                 return 1;
        default : printf("wrong input");

                 
    }
    }
}