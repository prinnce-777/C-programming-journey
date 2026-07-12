 #include <stdio.h>
int main(){
    int arr[5]={1,2,3,4,0};
    int max=arr[0];
    for(int i=1;i<=4;i++){
        if(max<arr[i]){
            max=arr[i];
        }
       }  printf("%d",max);
    }                    // prints the highest number
   
   