#include <stdio.h>
#include <string.h>
#define max 500
struct bus{
    int bus_number;
    char from[40];
    char to[40];
    int number_of_seat;
    int gender;
    int total_seats;            //total_seats = count
    int fare;
    int phone_number;
    int id;
};
int main() {
    struct bus b[max];
    int choice;
    int i;
    int count=30;
    int AV=11;
    char from[40];
    char to[40];
    int choice1;
    int book;
    while(1)    {
    printf("1.book tickets\n");
    printf("2.display busses\n");
    printf("3.cancel booking\n");
    printf("4.view bookings\n");
    printf("enter the choice--");
    scanf("%d",&choice);
    switch (choice){
        case 1: if(count==0) {
            printf("tickets are not available");
            break;
        } else  {
            printf("from-");
            scanf("%s",&b[max].from);
            printf("to-");
            scanf("%s",&b[max].to);
            printf("from-%s\n",b[max].from);
            printf("to-%s\n",b[max].to);
            printf("--avilable busses are-%d\n",AV);
            printf("1.AC\n");
            printf("2.non-AC\n");
            printf("enter the choice-");
            scanf("%d",&choice1);
               if(choice1==1)        {
               for(i=0;i<AV;i++)     {
               int bus_no=32+i;
               if(bus_no % 2==0)     {
                   printf("bus number-%d (AC)\n",bus_no);
               }
               }
               } else if(choice1==2)  {
                   for(i=0;i<AV;i++)  {
                   int bus_no=32+i;
                   if(bus_no % 2 !=0) {
                       printf("bus number-%d (non-ac)\n",bus_no);
                   } 
                   }
                   }
                   printf("enter the bus number you want to book-");
                   scanf("%d",&b[max].bus_number);
                   printf("you selected bus no-%d\n",b[max].bus_number);
                   printf("select the seat:\n");
                   for(i=0;i<count;i++){
                       printf("seat( %d )\n",i);
                   }
                   printf("enter the seat number you want select-");
                   scanf("%d",&b[max].number_of_seat);
              printf("your selected seat number-%d\n",b[max].number_of_seat);
               printf("1.male\n");
               printf("2.female\n");
               printf("3.other\n");
               printf("enter your gender-");
               scanf("%d",&b[max].gender);
               switch (b[max].gender) {
                   case 1:if(b[max].gender==1){
                   printf("--you need to do payment--\n");
               }
               }
                   case 2:if(b[max].gender==2){
                   printf("--you dont need to do payment--\n");
               } 
               }     
                   case 3:if(b[max].gender==3){
                   printf("--you need to do payment--\n");
               }
               }     
               printf("enter the phone number-");
               scanf("%d",&b[max].phone_number);
               printf("%d\n",b[max].phone_number);
     printf("did your payment completed\n");
     printf("1.yes\n");
     printf("2.no\n");
     printf("enter the option-");
     scanf("%d",&b[max].fare);
         if (b[max].fare==1) {
         printf("enter your aadhar card number (or) PAN number-");
         scanf("%d",&b[max].id);
         printf("id-%d",b[max].id);
         printf("--ticket booking is succesfull--\n");
         printf("pickup at bustand (standard-4)\n");
         printf("timings:-\n");
         printf("pickup-12:00am , drop-3:33am\n");
         printf("all the details will be sent to your phone number\n");
         printf("for any further details contact - %d",8736635);
         printf("----thank you----\n");
     } else {
         printf("first complete your payment");
         break;
     }
    }
    }
