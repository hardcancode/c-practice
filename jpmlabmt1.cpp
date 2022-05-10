#include<iostream>
using namespace std;

int main(){

    int i , frames[50];

    cout<<"\nenter"<<"2"<<"frames:";
    for(i=1;i<3;i++){
        cin>>frames[i];
        

    }

    for(i=1;i<3;i++){
        if (i%1==0){
            cout<<frames[i]<<"\n";
            cout<<"sending frame:"<< frames[i]<<"\n";
            cout<<"recieving frames "<<frames[i]<<"\n";
            cout<<"ack recieved\n";
            
            
        }
        else{
            cout<< frames[i]<<" ";
        }
        if(2%1 !=0)
        cout<<"\n ack is recieved by sender\n";

        return 0;
    }
}