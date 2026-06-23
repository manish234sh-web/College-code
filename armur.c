# include <stdio.h>
#include<math.h>
int main(){
    int i,c=0,r=0,x,sum=0,t,n;
    printf("enter number");
    scanf("%d",&n);
    t=n;
    x=n;
    while(n!=0){
        n=n/10;
        c++;
    }
    while(t!=0){
        r=t%10;
        
        sum=sum + (pow(r,c));
        t=t/10;
    }
    if(sum==x){
        printf("%d is a armstrong number",x);
    }
    else{
        printf("not a armstrong number");
    }
}