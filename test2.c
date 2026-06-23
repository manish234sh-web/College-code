# include <stdio.h>
# include <math.h>
// # include<math.h>
// void namaste();
// void bonjour();
// void printtable(int n);
int main(){
//     // char ch;
//     // printf("enter nationality");
//     // scanf("%c",&ch);
//     // if(ch=='i'){
//     //     printf("indian");
//     // }
//     // else{
//     //     printf("bonjour");
//     // }
//     int n;
//     printf("enter number");
//     scanf("%d",&n);
//     printtable(n);

// }
// void printtable(int n){
//     for(int i=1;i<=10;i++){
//         printf("%d\n",i*n);

//     }
// }
// void namaste(){
//     printf("namaste");
// }
// void bonjour(){
//     printf("bonjour");
//     //printf(n,"hello\n");printf("hello\n");printf("hello\n");printf("hello\n");printf("hello\n");printf("hello\n");printf("hello\n");printf("hello\n");printf("hello\n");
// }
// float printsqarea(float x);
// float printcrlarea(float y);
// float printrctarea(float z,float n);
// int main(){
//     float x,y,z,n;
//     printf("enter side of square \n");
//     scanf("%f",&x);
//     printsqarea(x);
//     printf("enter radius of circle");
//     scanf("%f",&y);
//     printcrlarea(y);
//     printf("enter length and breath ");
//     scanf("%f%f",&z,&n);
//     printrctarea(z,n);

// }
// float printsqarea(float x){
//     printf("\narea of square is %f\n",x*x);
// }
// float printcrlarea(float y){
//     printf("\narea of cirle is %f\n",3.14*y*y);

// }
// float printrctarea(float z,float n){
//     printf("\narea of rectangle is %f\n",z*n);
// }

// int stu,y,n;
// float avg,big,small,sum=0;
// printf("enter no. of students\n");
// scanf("%d",&n);
// float x[n];
// for(int i=0;i<n;i++){
//     printf("enter marks");
//     scanf("%f",&x[i]);
// }
// for(int i= 0;i<n;i++){
//     sum=sum+x[i];
// }

// avg=(sum)/(n);
// big=x[0];
// for(int i=0;i<n;i++){
//     if(big<x[i]){
//         big=x[i];
//     }
// }
// small=x[1];
// for(int i=0;i<n;i++){
//     if(small>x[i]){
//         small=x[i];
//     }
// }
// printf("total no students %d\n",n);printf("total  marks %f\n",sum);
// printf("average of total marks %f\n",avg);
// printf("highest number %f\n",big);
// printf("lowest marks %f\n",small);
// int i,k, sum=0,r,x,p,t;
// k=0;
// printf("armstrong numbers are ");
// for(i=1;i<=100;i++){
//     // printf("%d",i);
//   sum=0;
//   p=i;
//   x=i;
//   t=i;
//   k=0;
//     while (p!=0)
//     {
//        p=p/10;
//        k++;
//     }
//     while(x!=0)
//     {
//       r=x%10;
//       sum=sum+pow(r,k);
//       x=x/10;
//     }
 
//  if(sum==t){
//     printf("%d ,",t);
int m,n,p,r,i,a,b;
printf("enter order of matrix");
scanf("%d%d",&m,&n);
printf("enter order of second matrix");
scanf("%d%d",&p,&r);
if(m==p&&n==r){
int q[m][n];
int w[p][r];
for(i=0;i<m;i++){
   for (int j=0;j<n;j++){
      printf("enter element");
      scanf("%d",&q[i][j]);
   }
}
for(i=0;i<p;p++){
   for(int j=0;j<r;j++){
      printf("enter element");
      scanf("%d",&w[i][j]);
   }
}
int c[m][n];
for (i=0;i<m;i++){
   for(int j =0;j<n;j++){
      c[i][j]=q[i][j]+w[i][j];
   }
}
printf("%d",c[m][n]);
}
else{
   printf("wrong order");
}
}