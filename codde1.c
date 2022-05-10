#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
      {
	  printf("element - %d : ",i);
	  scanf("%d",&a[i]);
	  } 
    int oddSum=0,evenSum=0;
    i=0;
    while(i<6){
        if(arr[i]%2==0){
        evenSum=evenSum+arr[i];
        }
    else{
             oddSum=oddSum+arr[i];
        }
         i++;
    }
    printf("The sum of odd numbers are: %d",oddSum);
    printf("\nThe sum of odd numbers are: %d",evenSum);
    getch();
    return 0;
}