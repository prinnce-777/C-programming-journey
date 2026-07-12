#include <stdio.h>
char Printarr(char arr[50]){
    printf("%s",arr);
}
int main(){
    char arr[50];
    printf("enter the arr=");
    scanf("%s",arr);
    Printarr(arr);
}