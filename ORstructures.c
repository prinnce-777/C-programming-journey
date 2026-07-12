#include <stdio.h>
struct car{
    int milage;
    int speed;
    char grade;
};
int main(){
struct car volvo;
volvo.milage=23;
volvo.speed=187;
volvo.grade='b';
printf("volvo milage=%d, volvo speed=%d, volvo safety grade= %c",volvo.milage,volvo.speed,volvo.grade);
}
//if you want type name without using strings