#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf("ente 1=");
    scanf("%d",&num1);
     printf("ente 2=");
    scanf("%d",&num2);
    int *ptr1=&num1;
    int *ptr2=&num2;
   int sum=*ptr1+*ptr2;
   int *ptr=&sum;
   printf("%p\n",ptr);
   printf("%d",*ptr);
   
}