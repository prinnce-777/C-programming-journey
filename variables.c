#include <stdio.h>
int main() {
    int date =14;
    printf("prinnce will by his dream house on february %d,2034\n", date);
    printf("yeah he already bought it\n");

    float income= 12.3;
    printf("every year prinnce will get %f millions \n", income);

    char name[]="prinnce";
    printf("%s  name is written on the most succesful persons among the world\n",name);


    printf("how many millions prinnce will get per year=");
    scanf("%f", &income);
    printf("prinnce will get %f millions per year\n",income);

    int num1;
    int num2;
    printf("enter the first number=");
    scanf("%d", &num1);
    printf("enter the second number=");
    scanf("%d", &num2);
    int sum = num1+num2;
    printf("the sum of  two numbers is %d\n",sum);
    int mul=num1*num2;
    printf("the result for multiplication of two number is %d\n",mul);
    int sub=num1-num2;
    printf("the result for subtraction of two number is %d\n",sub);
    int div=num1/num2;
    printf("the result for division of two number is %d\n",div);

    if (num1 % 2 == 0) {
        printf("the num1 is even\n");
    } else {
        printf("the num1 is odd\n");
    }
     if(num1>num2){
        printf("the num1 is greater than num2\n");
     } else {
        printf("the num2 is greater than num1\n");
     } 

     if (num1>num2 && num1==num2){
        printf("the num1 is greater than num2 and also equal to num2\n");
     } else{
        printf("the condition is false\n");
     }
     if (num1>num2 || num1==num2){
        printf("one or both conditions are true\n");
     } 
     return 0;
     }
    

    