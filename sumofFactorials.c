#include <stdio.h>
int main(){
    int fact=1;
    int ans=0;
    int num;
    printf("enter ");
    scanf("%d",&num);
    for(int i=1;i<=10;i++){
        if(i<=num){     //if num is 5:
            fact=fact*i; //1!=1, 2!=2, 3!=6, 4!=24, 5!=120  
            ans=ans+fact; // 1, 3, ,9, 33, 153
        
        }          
    } printf("%d ",ans);
}