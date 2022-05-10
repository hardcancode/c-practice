#include<stdio.h>
#include <string.h>

int main()
{
    char inpline[1000];
    scanf("%[^\n]", inpline);
    int l=strlen(inpline),i,count=0;
    for(i=0;i<l;i++){
        if(line[i]==' '){
            count+=1;
        }
    }
    
    char arr_word[count+1][26];
    int j,ind=0;
    for(i=0;i<count+1;i++){
        for(j=0;j<26;j++){
            if(line[ind]==' '){
                ind++;
                break;
            }
            arr_word[i][j]=line[ind];
            ind++;
        }
    }
    return 0;
}