#include <stdio.h>
#include <string.h>
struct student{
    char name[20];
    int rollnumber;
    int Rollnumber;
};
int main(){ 
struct student s1;
    printf("enter the name-" );
    scanf("%s",&s1.name);
    printf("%s\n",s1.name);
    printf("enter the roll num-");
    scanf("%d",&s1.rollnumber);
    printf("%d\n",s1.rollnumber);
    printf("enter the Rollnumber-");
    scanf("%d",&s1.Rollnumber);
    printf("%d\n",s1.Rollnumber);
    strcpy(s1.name,"charlie");     //if we modified the name
    
 if(s1.Rollnumber==s1.rollnumber){
      printf("modified the name of this roll number :\n");
     printf("%s",s1.name);   //the name that we modified will be printed
 } else {
 printf("student with this Roll number is not found");
 }
 
}