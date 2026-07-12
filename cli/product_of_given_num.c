#include <stdio.h>
 int main(){
     int rem;
     int ans=1;
     int num;
 printf("enter the num=");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        ans=ans*rem;
        num=num/10;
    } printf("%d",ans);
    return 0;                    //this code will calculate the product of digits of a given number. (ques.7)
}
  