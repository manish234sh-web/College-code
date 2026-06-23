# include <stdio.h>
int main (){
    float a,b;
char k;
printf("enter operands\n");
scanf("%f%f",&a,&b);
printf("list of operation\naddition + \nmultiplication * \ndivison / \n subtraction - \n");
scanf("%s",&k);

    switch(k){
    case '+' :printf("additon is %f",a+b);
       break;
    case '*':printf("multiplication is %f",a*b);
       break;

    case '/': printf("division is %f",a/b);
       break;
    case '-': printf("subtraction is %f",a-b);
       break;
    default : printf("wrong input");

}


}

