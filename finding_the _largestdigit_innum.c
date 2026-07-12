#include <stdio.h>
int main(){
    int rem;
    int num;
    int largest=0;
    printf("enter the num=");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        if(rem>largest){
             largest=rem;}
             num=num/10;}
             printf("%d",largest);}