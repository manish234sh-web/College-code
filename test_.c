# include<stdio.h>
int main(){
    int n,i,large,seclarge,index1=0,index=0,found=0;
    printf("enter number of elements\n");
    scanf("%d",&n);
     if(n==1){
            printf("only one element, therefore no largest and second largest");
            return 0;
        }
    int arr[n];
    printf("enter element\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   
     if(n<3&&n>=1){
         if(arr[0]>arr[1]){
            printf("largest element is = %d at index 0 and second largest number is = %d  at index 1",arr[0],arr[1]);

        }
        else{
            printf("largest element is = %d at index 1 and second largest nummber is = %d at index 0",arr[1],arr[0]);
        }

     }
    else{
    large=arr[0];
    seclarge=arr[0];
    for(i=0;i<n;i++){
        if(large < arr[i]){
            seclarge=large;
            index1=index;
            found=1;
            large=arr[i];
            index=i;
        }
        else if(large>arr[i]&&arr[i]>seclarge){
                seclarge=arr[i];
                index1=i;
                found=1;
            }
            
    }
    if(found==0){
        printf("largest no. = %d at index = %d and second largest does  not exist",large,index);

    }
    else{
    printf("second largest = %d at index = %d and largest = %d at index = %d",seclarge,index1,large,index);
    }
}
}