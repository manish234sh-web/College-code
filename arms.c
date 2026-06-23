#include<stdio.h>
#include<math.h>
int main(){
int i,k, sum=0,r,x,p,t;
k=0;
printf("armstrong numbers are ");
for(i=1;i<=100;i++){
  sum=0;
  p=i;
  x=i;
  t=i;
  k=0;
    while (p!=0)
    {
       p=p/10;
       k++;
    }
    while(x!=0)
    {
      r=x%10;
      sum=sum+pow(r,k);
      x=x/10;
    }
 
 if(sum==t){
    printf("%d ,",t);
   }
}
}