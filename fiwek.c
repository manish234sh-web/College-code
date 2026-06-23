#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// int main(){

    // int x;
    // printf("enter number");
    // scanf("%d",&x);
    // int *ptr=&x;
    // printf("%d",2**ptr);
    // int a=10;
    // int b=20;
    // int *ptr1=&a;
    // int *ptr2=&b;
    // printf("%p is addres of a\n%d is the value of a\n %p is the adress of b \n%d is the value of b",ptr1,*ptr1,ptr2,*ptr2);
//     int a = 50;

// int *p = &a;

// a = 80;

// printf("%d  %zu ", *p,sizeof(p));
// int ar[8]={2,5,5,9,8,7,7,9};
// int *pt=ar;
// printf("%zu",sizeof(ar));
// int arr[3]={10,20,30};

// printf("%d", *(arr+1));
// int arr[4]={5,10,15,20};

// int *ptr = arr;

// ptr++;

// printf("%d", *ptr);
// int arr[5]={1,2,3,4,5};

// printf("%d\n", arr[3]);
// printf("%d", *(arr+3));
// int n[5],sum=0,large;

// printf("enter element");
// for(int i=0;i<5;i++){
//     scanf("%d",&n[i]);
// }
// int *nt=n;
// for(int i=0;i<5;i++){
//     sum=sum+*(nt+i);
// }
// printf("%d",sum);
// large=*(nt+0);
// for(int i=0;i<5;i++){
//     if(large<=*(nt+i)){
//         large=*(nt+i);
//     }
// }
// printf("\n%d",large);
// int arr[4]={10,20,30,40};

// int *ptr = arr;

// printf("%d", *(ptr+2));
// int arr[3]={5,10,15};

// int *ptr = arr;

// ptr++;

// printf("%d", *ptr);
// int arr[5]={1,2,3,4,5};

// int *ptr = arr;

// printf("%d", ptr[3]);
// int n[10],i,sum=0,l,s;
// int *pt=n;

// for(i=0;i<10;i++){
//     scanf("%d",(pt+i));
// }
// for(i=0;i<10;i++){
//     printf("%d ",*(pt+i));
// }

// for(i=0;i<10;i++){
//     sum=sum + *(pt+i);
// }

// printf("\n%d\n",sum);
// //multiplication
// for(i=0;i<10;i++){
//     *pt= *pt*3;
//     pt++;
// }
// pt=n;
// for(i=0;i<10;i++){
//     printf("%d ",*pt);
//     pt++;
// }
// //average
// printf("average = %d\n",sum/10);
// //largest
// pt=n;
// l=*pt;

// for(i=0;i<10;i++){
//     if(l<*pt){
//         l=*pt;
//     }
//     pt++;
// }
// printf("%d\n",l);
// //smallest
// pt=n;
// s=*pt;
// for(i=0;i<10;i++){
//     if(s>*pt){
//         s=*pt;
//     }
//     pt++;
// }
// printf("%d\n",s);
// // reverse
// pt=n+9;
// for(i=0;i<10;i++){
//     printf("%d ",*pt);
//     pt--;
// }
// int x=10;
// int *pt=&x;
// int **px=&pt;
// printf("%d  %p  %d",x,pt,**px);
// int x = 5;

// int *p = &x;

// int **pp = &p;

// printf("%d", **pp);

// int x = 20;

// int *p = &x;

// int **pp = &p;

// **pp = 100;

// printf("%d", x);
// int x = 10;

// int *p = &x;

// int **pp = &p;

// *p = 50;

// printf("%d", **pp);
// int numm=25;
// int *pt=&numm;
// int**ptx=&pt;
// **ptx=75;
// printf("%d",numm);
// int x=25;
// int*p=&x;
// int**pp=&p;
// printf("%d   %p  %d   %p  %d",x,p,*p,pp,**pp);
// int a=10;
// int*p=&a;
// int**pp=&p;
// // printf(" %d   %p   %p",a,p,*pp);
// #include <stdio.h>

// void update(int **pp)
// {
// //     static int x = 100;
// //     printf("%p\n",&x);

// //     *pp = &x;
// //     printf("%p",*pp);
// // }

// int main()
// {
//     // int num = 10;

//     // int *ptr = &num;

//     // update(&ptr);

//     // printf("%p  %p", ptr,&num);

// }
// void swap(int *p ,int*t)

// {   int k;
//     k=*p;
//     *p=*t;
//     *t=k;
    
    
// }
// void doublenum( int *y){
//     *y=*y*2;
//     printf("doubled number is %d ",*y);
// }
// void triplenum( int*o){
//     *o=*o*3;
//     printf("tripled number is %d",*o);
// }
// void adrval(int*t){
//     printf("address is %p, value is %d\n\n",t,*t);

// }

int main(){
// {  while(1){
//     int x,y,t,k,q,u;
//     printf(" enter operation\n");
//     printf("1 swap two numbers\n");
//     printf("2 double a number\n");
//     printf("3 triple a number\n");
//     printf("4 print address and value\n");
//     printf("5 exit\n");
//     scanf("%d",&t);
//     switch (t)
//     {
//     case 1 : printf("enter numner x,y");
//     scanf("%d%d",&x,&y);
//              printf(" x=%d, y=%d before swap\n",x,y);
//              swap(&x,&y);
//              printf("x=%d,y=%d after swap",x,y);
//              break;
//     case 2 : printf("enter number \n");
//              scanf("%d",&x);
//              doublenum(&x);
//              break;
//     case 3 : printf("enter number \n");
//              scanf("%d",&x);
//              triplenum(&x);
//              break;
//     case 4 : printf("enter number");
//     scanf("%d",&x);
//              int *p=&x;
//              adrval(p);
//              break;
//     case 5 : printf("exiting program\n\n");
//     return(0);
//     }
// }



    // int *ptr;

    // ptr = malloc(5 * sizeof(int));

    // for(int i=0;i<5;i++)
    // {
    //     scanf("%d",&ptr[i]);
    // }

    // for(int i=0;i<5;i++)
    // {
    //     printf("%d ",ptr[i]);
    // }

    // return 0;
    // int *ptr,i;
    // ptr=malloc(5 * sizeof(int));
    // for(i=0;i<5;i++){
    //     printf("enter number\n");
    //     scanf("%d",&ptr[i]);
    //     printf("%d",i);

    // }
    // for(i=0;i<5;i++){
    //     printf("%d",*(ptr+i));
    // }
    // free(ptr);
//     int n,i;
//     printf("enter size");
//     scanf("%d",&n);
//     int *ptr;
//     ptr=malloc(n*sizeof(int));
//     for(i=0;i<n;i++){
//         printf("enter");
//         scanf("%d",&ptr[i]);
//     }
//    int s=0,l,sa,a;
//    for(i=0;i<n;i++){
//     s= s + *(ptr+i);

//    }
//    printf("%d is sum , %d is average",s,s/n);
//    l=*(ptr+0);
//    for(i=0;i<n;i++){
//     if(l<*(ptr+i)){
//         l=*(ptr+i);
//     }
//    }
//    sa=*(ptr+0);
//    for(i=0;i<n;i++){
//     if(sa>*(ptr+i)){
//         sa=*(ptr+i);
//     }
//    }
//    printf("large =%d ,small =%d",l,sa);
//    free(ptr);
// //marks question
// int n1,s2=0,a2,h1,l2;
// printf("how many marks");
// scanf("%d",&n1);
// int *pt1;
// pt1=malloc(n1*sizeof(int));
// printf("enter marks");
// for(i=0;i<n1;i++){
//     scanf("%d",&pt1[i]);

// }
// l2= *(pt1+0);
// h1= *(pt1+0);
// for(i=0;i<n1;i++){
//     s2=s2+ *(pt1+i);
//     if(h1<*(pt1+i)){
//         h1= *(pt1+i);

//     }
//     if(l2>*(pt1+i)){
//         l2=*(pt1+i);
//     }

// }
// a2=s2/n1;
// printf(" average marks =%d\n highest marks =%d\n lowest marks =%d\n",a2,h1,l2);
// free(pt1);

//student mark manager;
// int k,f;int n,i,t,sum=0,*TEMP;int *ptr;
// int e;

// while(1){

// printf(" \n 1 add marks \n 2 show marks \n 3 show avergae \n 4 exit  \n");
// scanf("%d",&k);
// switch(k) {
//  case 1 : 
//           printf("enter no . of marks  \n");
//           scanf("%d",&n);
          
//           ptr=calloc(n,sizeof(int));
//           for(i=0;i<n;i++){
//           scanf("%d",&ptr[i]);
//           }

//           printf("\nwant to enter more marks ?\n 1/0 \n");
//           scanf("%d",&e);
//           if(e == 1){
//             printf(" enter no. of marks \n");
//           scanf("%d",&t);
//           f=n+t;
//         //   printf("%d",f);
//         //   printf("%d",n);


//           TEMP=realloc(ptr,f*sizeof(int));
//          if(TEMP == NULL){
//             printf("Memory allocation failed\n");
            
//             break;
//           }
//           ptr=TEMP;
//           printf(" \n enter more marks \n ");
//           for(i=n;i<f;i++){
//           scanf("%d",&ptr[i]);
//           }
//           t=f;



//         }
//         else{
//             t=n;
//         }

//         break;
// // sum;
// // t=n;
// case 3 : for(i=0;i<t;i++){
//          sum = sum +ptr[i];
//          }
//          printf(" average marks = %d\n",sum/t);
//          break;

// //SHOW MARKS;
//  case 2 :printf(" entered marks  \n");
//          for(i=0;i<t;i++){
//          printf("%d \n",*(ptr+i));
//          }
//          break;
// case 4 : printf("exit");
//          free(ptr);
//          ptr=NULL;
//          return 0;
//          break;


// }
// }
// }
// char *p=NULL;
// p=malloc(50*sizeof(char));
// fgets(p,50,stdin);
// // gets(p);
// printf("%s",p);//why printf("%s",*p does not work)
// printf("%d",strlen(p));
// free(p);
// p=NULL;
// struct student
// {
//     int roll;
//     char name[50];
// }s;
// struct student *ptr=&s;
// ptr=calloc(1,sizeof(struct student));
// printf("enter roll");
// scanf("%d",&ptr->roll);
// getchar();
// printf("enter name\n");
// fgets(ptr->name,50,stdin);
// printf("%d  ",ptr->roll);
// printf("%s",ptr->name);
// free(ptr);
// ptr=NULL;
// struct student
// {
//     int roll;
//     char name[50];
// };
// struct student *ptr;
// int i;
// ptr=calloc(5,sizeof(struct student));
// for(i=0;i<5;i++){
// printf("enter roll");
// scanf("%d",&ptr[i].roll);
// getchar();
// printf("enter name\n");
// fgets(ptr[i].name,50,stdin);
// }
// for(i=0;i<5;i++){
// printf("%d  ",ptr[i].roll);
// printf("%s",ptr[i].name);
// }
// free(ptr);
// ptr=NULL;
FILE *fp;
fp=fopen("student.txt","r");
if(NULL==fp){
    printf("file opening failed");
    return 1;
}
fclose(fp);
struct stud{
    int roll;
    char name[50];
    float marks;
};
struct stud *ptr,*temp;
int n,k,i,r,w,rd,found=0 ;//r,&rd,nm,na,ma,mf
float high,mf;
char rv[60],nm[60],na[60],ma[60];
printf("enter no. of students \n");
scanf("%d",&n);
ptr=calloc(n,sizeof(struct stud));

if(ptr==NULL){
    printf("memory allocation failed");
    return 1;
}
for(i=0;i<n;i++){
    printf("%d student detail \n",i+1);
    printf("enter roll no. \n");
    scanf("%d",&ptr[i].roll);
    getchar();
    printf("enter name of student \n");
    fgets(ptr[i].name,50,stdin);
    printf("enter marks of student \n");
    scanf("%f",&ptr[i].marks);
}

while(1){
printf("1. add students\n2.show students\n3.search by roll number\n4. save\n5. load\n6. show highest marks\n7. exit \n");
scanf("%d",&k);
switch (k)
{
case 1: printf("no. of students want to add ? \n");
        scanf("%d",&r);
        temp=realloc(ptr,(n+r)*sizeof(struct stud));
        if (NULL == temp){
            printf("reallocation fails");
            break;
        }
        ptr=temp;
        for(i=n;i<(r+n);i++){
            printf(" %d student detail\n",i+1);
            printf("enter roll number  ");
            scanf("%d",&ptr[i].roll);
            getchar();
            printf("enter name of student ");
            fgets(ptr[i].name,50,stdin);
            printf("enter marks of student  ");
            scanf("%f",&ptr[i].marks);
        }
        n=n+r;
        break;
case 2 : for(i=0;i<n;i++){
    printf("%d student details\n",i+1);
    printf("Roll number : %d\nName : %s\nMarks : %f \n\n",ptr[i].roll,ptr[i].name,ptr[i].marks);

      }
      break;

case 3 : printf("enter roll number to search ");
         scanf("%d",&w);
         for(i=0;i<n;i++){
            if(w==ptr[i].roll){
                found=1;
                printf("\nstudent detail of roll number %d\n",w);
                printf("Name : %s\nRoll number : %d\nMarks : %f \n",ptr[i].name,ptr[i].roll,ptr[i].marks);
                break;

            }
            
         }
         if(found==0){
                printf("student not found\n");
            }
         
         break;

case 4 : printf("saving data\n");fp=fopen("student.txt","a");
         if(fp==NULL){
            printf("file opening failed");
            return 1;
         }
         for(i=0;i<n;i++){
            fprintf(fp," %d\n %s %f\n",ptr[i].roll,ptr[i].name,ptr[i].marks);
         }
         fclose(fp);
         break;

case 5 : printf("loading data \n");fp=fopen("student.txt","r");
        //  if(fp==EOF){
        //     printf("file is empty");
        //  }
         if(NULL==fp){
            printf("operation failed");
            return 1;
         }
         while(fscanf(fp,"%d%s%f",&rd,rv,&mf)==3){
            printf(" roll number :%d name: %s marks :%f\n",rd,rv,mf);
         }
         fclose(fp);
        break;       
case 6 : high=ptr[0].marks;
         for(i=0;i<n;i++){
            if(high<ptr[i].marks){
                high=ptr[i].marks;
            }
         }
         for(i=0;i<n;i++){
            if(high==ptr[i].marks){
                printf("\nstudent detail of highest marks \n");
                printf("Name : %s\nRoll number : %d\nMarks : %f \n",ptr[i].name,ptr[i].roll,ptr[i].marks);
            }
         }
         break;

case 7 : free(ptr);
         ptr=NULL;
         return 0;

}
}
}


// }
// int n,i;
// printf("enter no. of students");
// scanf("%d",&n);
// getchar();
// struct stud{
//     int roll;
//     char name[50];
//     float marks;
// }s[n];
// for(i=0;i<n;i++){
// printf("enter name of student %d\n",i+1);
// fgets(s[i].name,50,stdin);
// printf("enter roll number of student %d\n",i+1);
// scanf("%d",&s[i].roll);
// printf("enter marks of student %d\n",1+i);
// scanf("%f",&s[i].marks);
// getchar();
// }
// FILE *fp;
// fp=fopen("student.text","w");
// if(fp==NULL){
//     printf("file opening failed");
//     return 0;
// }
// for(i=0;i<n;i++){
// fprintf(fp,"%s\n%d\n%f\n",s[i].name,s[i].roll,s[i].marks);
// }
// fclose(fp);
// int sum=0,average,count=0,x;
// FILE *fp;
// fp=fopen("marks.txt","r");
// while(fscanf(fp,"%d",&x)==1){
//     sum=sum+x;
//     count++;
// }
// printf("%d is sum\n",sum);
// printf("average is %d",sum/count);
// struct stud{
//     char name[50];
//     int roll;
//     float marks;
// }s[5];
// int i,g=0,d;
// char k[50];
// float t;
// FILE *fp;
// fp=fopen("student.txt","w");
// if(fp==NULL){
//     printf("file opening failed");
//     return 1;
// }
// printf("enter student detail : \n");
// for(i=0;i<2;i++){
//     printf("enter name ");
//     fgets(s[i].name,50,stdin);
//     printf("enter roll number ");
//     scanf("%d",&s[i].roll);
//     printf("enter marks ");
//     scanf("%f",&s[i].marks);
//     getchar();
// }

// for(i=0;i<2;i++){
//     // fprintf(fp,"student details ");
//     fprintf(fp,"%s ",s[i].name);
//     fprintf(fp,"%d ",s[i].roll);
//     fprintf(fp,"%f ",s[i].marks);
// }
// fclose(fp);
// fp=fopen("student.txt","r");
// while(fscanf(fp,"%s%d%f",
//     k,
//     &d,
//     &t)==3){
//     printf(" detail of student %d",g+1);
//     printf("%s  %d  %f  \n",k,d,t);
//     g++;

// }
// printf("%d",g);
// // fscanf(fp,"%s",k);
// // getchar();
// // printf("%s",k);
// fclose(fp);
// fp=NULL;












