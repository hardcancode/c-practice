#include<iostream>
#include<string.h>
 
using namespace std;

void add1(h[10] , j[10], int carryover){
    for(i=length-1;i>=0;i--)
        {
            if(h[i]=='0' && j[i]=='0' && carryover=='0')
            {
                sum[i]='0';
                carryover='0';
            }
            else if(h[i]=='0' && j[i]=='0' && carryover=='1')
            {
                sum[i]='1';
                carryover='0';
 
            }
            else if(h[i]=='0' && j[i]=='1' && carryover=='0')
            {
                sum[i]='1';
                carryover='0';
 
            }
            else if(h[i]=='0' && j[i]=='1' && carryover=='1')
            {
                sum[i]='0';
                carryover='1';
 
            }
            else if(h[i]=='1' && j[i]=='0' && carryover=='0')
            {
                sum[i]='1';
                carryover='0';
 
            }
            else if(h[i]=='1' && j[i]=='0' && carryover=='1')
            {
                sum[i]='0';
                carryover='1';
 
            }
            else if(h[i]=='1' && j[i]=='1' && carryover=='0')
            {
                sum[i]='0';
                carryover='1';
 
            }
            else if(h[i]=='1' && j[i]=='1' && carryover=='1')
            {
                sum[i]='1';
                carryover='1';
 
            }
        }
}
 
int main()
{
    char h[10],j[10];
    char sum[10],complement[10];
    int i;
    
    cin>>h;
    
    cin>>j;
    
if(strlen(h)==strlen(j))
    {
        char carryover='0';
        int length=strlen(h);

        add1();

        

            else
                break;
        }
        cout<<sum;
 
        for(i=0;i<length;i++)
        {
            if(sum[i]=='0')
                complement[i]='1';
            else
                complement[i]='0';
        }
        
if(carryover=='1')
            carryover='0';
        else
            carryover='1';
    
    cout<<carryover<<complement;
    }
    else {
        return 0;
    }
        
    return 0;
}