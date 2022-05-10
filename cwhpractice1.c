#include<stdio.h>

int main(){

    int n,t,ans;
    printf("Enter what type of conversion You need \n");
   
    
    printf("press 0 for exiting \n press 1 for kms to miles \n press 2 for inches to foot \n press 3 for cms to inches \n press 4 for pound to kgs \n press 5 for inches to meters \n");
    scanf("%d" , &t);
    printf("The number to be converted \n");
    scanf("%d", &n);

    if (t=1){
        ans= n*0.621371;
        printf("%d", ans);
    }
    else if(t=2){
        ans=n*0.0833333;
         printf("%d", ans);
    }
    else if(t=3){
        ans = n* 0.393701;
        printf("%d", ans);

    }
    else if(t=4){
        ans= n*0.453592;
        printf("%d" ,ans);

    }
    else if (t=5){
        ans = n*0.0254;
        printf("%d" ,ans);

    }
    else if(t=0){
        printf("Thank you for Using this calculator");

    }
    else{
        printf("invalid input");
    }

    
return 0;
};
