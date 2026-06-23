# include<stdio.h>
int main(){
    int x,y,z;
    printf("enter no. x and y ");
    scanf("%d %d",&x,&y);
    printf("no. before swaping x=%d and y=%d\n",x,y);
    z=y;
    y=x;
    x=z;
    printf("no. after swaping x= %d and y= %d",x,y);

}