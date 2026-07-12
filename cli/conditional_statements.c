#include <stdio.h>
int main() {
   
   int num1;
    int num2;
    int num3;
    printf("enter the first number=");
    scanf("%d",&num1);
printf("enter the second number=");
scanf("%d",&num2);
printf("enter the third number=");
scanf("%d",&num3);
 if (num1>num2 && num1>num3){
    printf("%d is greater than %d and %d",num1,num2,num3);
 } else if(num2>num1 && num2>num3) {
    printf("%d is greater than %d and %d",num2,num1,num3);
 } else{ 
    printf("%d is greater than %d and %d",num3,num1,num2); }
    
    return 0; }