#include <stdio.h>
int main(){
    int age=18;
    int *ptr=&age;
    printf("%d\n",age);
     printf("%p\n",&age);
    printf("%d\n",*ptr);
    printf("%p\n",ptr);
    (*ptr)++;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
     ptr++;
    printf("%p\n",ptr);
    printf("%d\n",*ptr);

}