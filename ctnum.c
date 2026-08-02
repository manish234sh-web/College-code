# include<stdio.h>
//---------------------------------------//
//          count no.of digits           //
//---------------------------------------//
// int main(){
//     int n,r,c=0;
//     printf("enter number\n");
//     scanf("%d",&n);
//     while(n!=0){
//         n=n/10;
//         c++;
//     }
//     printf(" total number of digit = %d",c);
// }
//-----------------------------------------//
//     count no. digits in a factorial     //
//-----------------------------------------//
// int main(){
//     long long int n,fact=1,c=0;
//     printf("enter number(below 21)");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("factorial = %d\n",fact);
//     x=fact;
//     while(fact!=0){
//         fact=fact/10;
//         c++;
//     }
//     printf("total number of digit = %d",c);
// }
//------------------------------------------------//
//            count no. of trailing zeros         //
//------------------------------------------------//
// int main(){
//     long long int n,r,c=0;
//     printf("enter number\n");
//     scanf("%lld",&n);
//     // printf("%lld",n);
//     while(n!=0){
//         r=n%10;
//         if(r==0){
//             c++;
//         }
//         else if(r!=0){
//            break;
//         }
//         n=n/10;
//     }
//     printf(" total no. of traling zeros %lld",c);
// }
//--------------------------------------------------//
//      no. of trailing zero in a factorial;        //
//--------------------------------------------------//
// int main(){
//     long long int r,fact=1
//     int c=0,n;
//     printf("enter number(below 21) \n");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf(" factorial = %lld",fact);
//      while(fact!=0){
//         r=fact%10;
//         if(r==0){
//             c++;
//         }
//         else if(r!=0){
//            break;
//         }
//         fact=fact/10;
//     }
//     printf(" total no. of traling zeros %d",c);

// }
//------------------------------------------------//
//          find non zero digit of number         //
//------------------------------------------------//
// int main(){
//     long long int n;
//     int found,r,c=0;
//     printf("enter number \n");
//     scanf("%lld",&n);
//     while(n!=0){
//         r=n%10;
//         if(r==0){
//             c++;
//         }
//         else if(r!=0){
//     
//            break;
//         }
//         n=n/10;
//     }
//     printf("%d",r);

// }
//-----------------------------------------------//
//     find the non zero digit of factorail n    //
//-----------------------------------------------//
// int main(){
//     long long int n,fact=1;
//     int r,c=0;
//     printf("enter number(below 21) \n");
//     scanf("%lld",&n);
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     printf("factorial = %lld\n",fact);
//      while(fact!=0){
//         r=fact%10;
//         if(r==0){
//             c++;
//         }
//         else if(r!=0){
//            break;
//         }
//         fact=fact/10;
//     }
//        printf(" total no. of traling zeros %d and non zero digit = %d",c,r);

// }
//------------------------------------------------------//
//                 FIZZ BUZZ problem                    //
//------------------------------------------------------//
// int main(){
//     int n,i;
//     printf("enter number ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         if(i%3==0){
            
//             if(i%5==0){
//                printf("fizzbuzz\n");
//             }
//             else{
//                 printf("fizz\n");
//             }
//         }
//         else if(i%5==0){
            
//             printf("buzz\n");

//         }
//         else{
//             printf("%d\n",i);
//         }
//     }

// }
int main(){
    int n,r,a,b,temp_a,temp_b;
    printf("enter numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    temp_a=a;
    temp_b=b;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }
    printf("GCD of %d and %d is = %d",temp_a,temp_b,a);


}




