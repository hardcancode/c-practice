#include<stdio.h>

int fibo(int n){
    if (n==1 || n==2){
        return n;
    }
    else {
        return fibo(n-1)+ fibo(n-2);
    };
}

int main () {
    int m;
    printf("Enter the value of n \n");
    scanf("%d",&m);
    printf(fibo(m));
    return 0;


}
