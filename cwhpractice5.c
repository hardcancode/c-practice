#include<stdio.h>
#include<string.h>

int main(){
    // int arr[];
    int a,b;
    int arr[9]={1,2,3,4,5,6,7,8};
    for(int i=0; i<8;i++){
        printf("%d ", arr[i]);
    }

        printf("\n");

    for(int j=7;j>=0;j--){
         printf("%d ", arr[j]);


    }
    return 0;
}