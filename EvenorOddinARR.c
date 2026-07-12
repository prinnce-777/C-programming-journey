#include <stdio.h>
int main(){
    int sum=0;
    int arr[5]={1,2,3,4,0};
    for(int i=0;i<=4;i++){
        if(arr[i]%2==0){
         sum=sum+arr[i];
             } 
    } printf("%d ",sum);
}