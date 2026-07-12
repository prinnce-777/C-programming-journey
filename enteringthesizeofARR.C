#include <stdio.h>
int main(){
    int n;
    printf("enter the n=");
    scanf("%d",&n);
    int arr[n];
    printf("arr[%d]\n",n);
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,i);
    }
    
}