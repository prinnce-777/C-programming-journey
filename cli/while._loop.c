#include <stdio.h>
int main(){
   int i=1;
    int ans=0;
    while(i<=100){
        if(i%2==0){
            i=i*2;}
            else{ i=i+2;}
            ans++;
        }

         printf("%d\n",ans);             //the value of ans represents the number of iterations the loop has executed until the condition becomes false.(ques.1)

         
         while(i<=10){
         printf("5*%d=%d",i,5*i);
            i++;
          }                            //this code will print the multiplication table of 5 from 5*1 to 5*10. (ques.2)  

   
    int count=0;
    int num;
    scanf("%d",&num);
 while(num!=0){
     num=num/10;
     count++;
 }
 printf("%d",count);                 //this code will count the number of digits in a given number. (ques.3)

    int rem;
      printf("enter num:");
      scanf("%d",&num); 
      while(num!=0){
          rem=num % 10;
          printf("%d",rem);
          num=num/10; }
                                    //this code will print the reverse of a given number. (ques.4)


        
                                    
                                    
        int fact=1;
    printf("enter the num");
    scanf("%d",&num);
    while(i<=num){
        fact=fact*i;
        i++;
    } printf("%d",fact);          //this code will calculate the factorial of a given number. (ques.5)


    
    printf("enter the num=");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        ans=ans+rem;
        num=num/10;
    } printf("%d",ans);
    return 0;                    //this code will calculate the sum of digits of a given number. (ques.6)
}
      