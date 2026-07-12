#include <stdio.h>
int main(){
    int lenght;
    int breadth;
    printf("enter the lenght=");
    scanf("%d",&lenght);
    printf("enter the breadth=");
    scanf("%d",&breadth);
    int area;
    area=lenght*breadth;
    printf("area of reactangle=%d",area);
    return 0;
}