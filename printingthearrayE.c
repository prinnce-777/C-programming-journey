#include <stdio.h>
int main(){
    int arr[5]={1,7,8,9,4};
    int rev=0;
    int rem;
    for(int i=0;i<=4;i++){
       rem=arr[i]%10;
       rev=rev*10+rem;
 printf("%d ",rem);
    }
    
}           //it will print the array elements
