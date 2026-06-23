# include<stdio.h>
int main(){
    float a,b,c,d,e;
    printf("enter hindi marks\n");
    scanf("%f%f%f%f%f", &a,&b,&c,&d,&e);
    
    float total =a+b+c+d+e;
    printf("total marks %f \n", total);
    float per=total/5.0;
    printf("percentage %f%%",per);
    if(per>=90 && per<= 100){
        printf("\ngrade is A");
    }
    else if (per>= 80 && per<= 90){
        printf("\ngrade is B");
    }
    else if (per>=60 &&  per<= 80)
    {
        printf("\ngrade is C");
    }
    else if (per< 60)
    {
        printf("\ngrade is D\n");
    }
}