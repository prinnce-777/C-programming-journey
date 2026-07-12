#include <stdio.h>
    #include <math.h> // used for giving additional maths knowledge to the c program,used to find square root too.
int main(){
    int a;
    int b;
    int ans;
    printf("enter digit a=\n");
    scanf("%d",&a);
    printf("enter digit b=");
    scanf("%d",&b);
    ans=pow(a,b);
    printf("%d",ans);
    return 0;
}