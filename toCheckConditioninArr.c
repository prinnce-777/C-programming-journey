#include <stdio.h>
int main(){
char arr[]="volvo";
printf("%s\n",arr);
for(int i=0;i<=4;i++){
    if(arr[i]=='v'){
        printf("yes");
        return 0;
    }
} printf("no");
}            

// if we keep break; in place of return 0:
 // it will check the condition and if it is true it
 //will print yes and no 

 //if we keep return 0; :
 //it will check the condition and if it is true it
 //will print yes and exit and if the condition is
 //false it will exit from the loop without printing 
 //yes and print no , so  the no is compulsory becoz 
 //we typed to print no separately, just we have to
 //check the condition in if section