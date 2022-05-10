#include<stdio.h>

int main(){
    int r,p,j;
    printf("How many rows do you want?\n");
    scanf("%d" ,&r);
    printf("press 1 for upward and 2 for reverse star pattern\n");
    scanf("%d" , &p);
    if(p==1){
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j <= i; j++){
        printf("*");
        }
        printf("\n");
    }
    }
    else if (p==2){
    for (int i = 0; i < r; i++)
    {
        for( j <= i; j = 0 ;  j--){
        printf("*");
        }
        printf("\n");
    }
    }
   return 0; 
}