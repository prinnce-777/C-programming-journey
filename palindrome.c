#include<stdio.h>
int main(){
    int num;
    int rem;
    int rev=0;
    printf("enter the num=");
    scanf("%d",&num);
    int orginalnum=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10; }
        if(orginalnum==rev){
            printf("the number is palindrome");
        } else {
            printf("the number is not palindrome");
        }
}