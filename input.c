// 5 subject marks input
#include<stdio.h>
int main() {
    int a,b,c,d,e;
    printf("enter hindi marks\n");
    scanf("%d", &a);
    printf("enter enlish marks\n");
    scanf("%d", &b);
    printf("emter physics marks\n");
    scanf("%d",&c);
    printf("enter chemistry marks\n");
    scanf("%d", &d);
    printf("enter boilogy marks\n");
    scanf("%d", &e);
    int total =a+b+c+d+e;
    printf("total marks %d \n", total);
    float per=total/5.0;
    printf("percentage %f",per);
    return 0;
}