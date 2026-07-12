#include <stdio.h>
#include <string.h>  // type this command only if you want
                     // to modify the name becoz it is string

  struct Student{
    char name[20];
     int age;
    float cgpa;
    char grade;
};
int main(){
    struct Student s1={"Alice",20,9.1,'A'};
    struct Student s2={"Bob",22,8.5,'B'};
 
    strcpy(s1.name,"charlie");
    s1.age=22;
    s1.cgpa=8.0;
    s1.grade='B';

    printf("Student 1: Name=%s, Age=%d, CGPA=%f, Grade=%c\n",s1.name,s1.age,s1.cgpa,s1.grade);
    printf("Student 2: Name=%s, Age=%d, CGPA=%f, Grade=%c\n",s2.name,s2.age,s2.cgpa,s2.grade);
    return 0;
}