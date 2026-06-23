//compund interest and simple interest for given principle amount and time 
# include<stdio.h>
# include<math.h>
int main(){
    float r,t,p,si,ci,a,n;
    printf("enter principle amount\n");
    scanf("%f",&p);
    printf("enter rate of interest ");
    scanf("%f",&r);
    printf("enter time[Years] ");
    scanf("%f",&t);
    si=r*t*p/100;
    printf(" simple interest  %f \n",si);
    a=si+p;
    printf("total amount %f \n",a);
    printf("enter no. of times compounded ");
    scanf("%f",&n);
    float e,z;
    e=r/100;//rate in percentage
    z=1+(e/n);
    ci=p*(pow(z,(n*t)));
    printf("%f",ci);
    return 0;
}