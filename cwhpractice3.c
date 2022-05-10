#include<stdio.h>

void addd(int* summ){
//   *summ = a+b;

}


int main(){
    int a = 5;
    int b = 9;
    addd(&a);
    printf("The new value of a is %d" , a);

    printf("The new value of b is %d" , b);


}