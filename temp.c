#include<stdio.h>
int main(){
    float c,f;
    printf("enter temperature in centigrade\n");
    scanf("%f",&c);
    f=(c*9.0/5.0)+32;
    printf("temperature in farenheit = %f",f);

}