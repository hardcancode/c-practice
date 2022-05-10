#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
#define total_number_of_frames 50
#define sending_frames 10
class selective_repeative
{
private:
int fr_send_at_instance;
int arr[total_number_of_frames];
int send[sending_frames];
int repeat_selective_com[sending_frames];
char repeat_selective_com_ack[sending_frames];
int sender_window;
int receiver_window;
public:
void input_repeative();
void send_repeative(int);
void receiver_function(int);
void case1();
void case2();
};

void selective_repeative::input_repeative()
{
int n;
int m;
int i;
cout<<"Enter the no of bits for this selective repeat : ";
cin>>n;
m=pow(2,n);
int t=0;
fr_send_at_instance=(m/2);
for(i=0;i<total_number_of_frames;i++)
{
arr[i]=t;
t=(t+1)%m;
}
for(i=0;i<fr_send_at_instance;i++)
{
send[i]=arr[i];
repeat_selective_com[i]=arr[i];
repeat_selective_com_ack[i]='n';
}
receiver_window=sender_window=fr_send_at_instance;
send_repeative(m);
}

void selective_repeative::send_repeative(int m)
{
for(int i=0;i<fr_send_at_instance;i++)
{
if(repeat_selective_com_ack[i]=='n')
cout<<"SENDER : FRAME "<<send[i]<<" IS SENT\n";
}
receiver_function(m);
}

void selective_repeative::receiver_function(int m)
{
time_t t;
int f;
int j;
int f1;
int a1;
char ch;
srand((unsigned)time(&t));
for(int i=0;i<fr_send_at_instance;i++)
{
if(repeat_selective_com_ack[i]=='n')
{
f=rand()%10;
if(f!=5)
{
for(int j=0;j<fr_send_at_instance;j++)
if(repeat_selective_com[j]==send[i])
{
cout<<"RECEIVER : FRAME "
<<repeat_selective_com[j]<<" YES RECEIEVED CORRECTLY\n";
repeat_selective_com[j]=arr[receiver_window];
receiver_window=(receiver_window+1)%m;
break;
}
int j;
if(j==fr_send_at_instance)
cout<<"RECEIEVER : DUPLICATE FRAME "
<<send[i]<<" DISCARDED\n";
a1=rand()%5;
if(a1==3)
{
cout<<"[ACKNOWLEDGEMENT "<<send[i]<<" lost]\n";
cout<<"[SENDER TIMEOUTS --> RESEND THE FRAME \n";
repeat_selective_com_ack[i]='n';
}
else
{
cout<<"[ACKNOWLEDGEMENT "<<send[i]<<" RECEIVED]\n";
repeat_selective_com_ack[i]='p';
}
}
else
{
int ld=rand()%2;
if(ld==0)
{
cout<<"RECEIVER : FRAME "<<send[i]
<<" IS CORRUPTED\n";
cout<<"RECEIVER : NEGATIVE ACKNOWLEDGEMENT "
<<send[i]<<" SENT\n";
}
else
{
cout<<"RECEIVER : FRAME "<<send[i]<<" IS LOST\n";	
cout<<"[SENDER TIMEOUTS ---> RESEND THE FRAME ]\n";
}
repeat_selective_com_ack[i]='n';
}
}
}
for(int j=0;j<fr_send_at_instance;j++)
{
if(repeat_selective_com_ack[j]=='n')
break;
}
int i=0;
for(int k=j;k<fr_send_at_instance;k++)
{	
send[i]=send[k];	
if(repeat_selective_com_ack[k]=='n')
repeat_selective_com_ack[i]='n';
else
repeat_selective_com_ack[i]='p';
i++;
}
if(i!=fr_send_at_instance)
{
for(int k=i;k<fr_send_at_instance;k++)
{
send[k]=arr[sender_window];
sender_window=(sender_window+1)%m;
repeat_selective_com_ack[k]='n';
}
}
cout<<"Want to continue? Yes:y\t No:n\n";
cin>>ch;
cout<<"\n";
if(ch=='y')
send_repeative(m);
}
void selective_repeative:: case1()
{
int n,m,i;
cout<<"Enter the number of bits : ";
cin>>n;
m=pow(2,n);
int t=0;
fr_send_at_instance=(m/2);
for(i=0;i<total_number_of_frames;i++)
{
arr[i]=t;
t=(t+1)%m;
}
for(i=0;i<fr_send_at_instance;i++)
{
send[i]=arr[i];
repeat_selective_com[i]=arr[i];
repeat_selective_com_ack[i]='n';
}
receiver_window=sender_window=fr_send_at_instance;
for(int i=0;i<fr_send_at_instance;i++)
{
if(repeat_selective_com_ack[i]=='n')
cout<<"SENDER : Frame "<<send[i]<<" is sent\n";
}
time_t ti;
int f,j,f1,a1;
char ch;
srand((unsigned)time(&ti));
for(int i=0;i<fr_send_at_instance;i++)
{
if(repeat_selective_com_ack[i]=='n')
{
f=rand()%10;
for(int j=0;j<fr_send_at_instance;j++)
if(repeat_selective_com[j]==send[i])
{
cout<<"RECEIVER : FRAME "<<repeat_selective_com[j]
<<" RECEIVED CORRECTLY\n";
repeat_selective_com[j]=arr[receiver_window];
receiver_window=(receiver_window+1)%m;
break;
}
int j;
if(j==fr_send_at_instance)
cout<<"RECEIEVER : DUPLICATE FRAME "
<<send[i]<<" DISCARDED\n";
cout<<"[ACKNOWLEDGEMENT "<<send[i]<<" RECEIVED]\n";
repeat_selective_com_ack[i]='p';
}
}
}

void selective_repeative:: case2()
{
 int n,m,i;
cout<<"Enter the number of bits : ";
cin>>n;
m=pow(2,n);
int t=0;
fr_send_at_instance=(m/2);
for(i=0;i<total_number_of_frames;i++)
{
arr[i]=t;
t=(t+1)%m;
}
for(i=0;i<fr_send_at_instance;i++)
{
send[i]=arr[i];
repeat_selective_com[i]=arr[i];
repeat_selective_com_ack[i]='n';
}
receiver_window=sender_window=fr_send_at_instance;

for(int i=0;i<fr_send_at_instance;i++)
{
if(repeat_selective_com_ack[i]=='n')
cout<<"send_repeative : Frame "<<send[i]<<" is sent\n";
}
	
time_t ti;
int f,j,f1,a1;
char ch;
srand((unsigned)time(&ti));
for(int i=0;i<fr_send_at_instance;i++)
{
if(repeat_selective_com_ack[i]=='n')
{
f=rand()%10;
if(f!=5)
{
for(int j=0;j<fr_send_at_instance;j++)
if(repeat_selective_com[j]==send[i])
{
cout<<"Reciever : Frame "
<<repeat_selective_com[j]<<" recieved correctly\n";
repeat_selective_com[j]=arr[receiver_window];
receiver_window=(receiver_window+1)%m;
break;
}
int j;
if(j==fr_send_at_instance)
cout<<"Reciever : Duplicate frame "
<<send[i]<<" discarded\n";
a1=rand()%5;
if(a1==3)
{
cout<<"(Acknowledgement "
<<send[i]<<" lost)\n";
cout<<"(Sender timeouts --> Resend the frame)\n";
repeat_selective_com_ack[i]='n';
}
else
{
cout<<"(Acknowledgement "
<<send[i]<<" recieved)\n";
repeat_selective_com_ack[i]='p';
}
}

else
{
int ld=rand()%2;
if(ld==0)
{
cout<<"receiver_function : Frame "
<<send[i]<<" is damaged\n";
cout<<"RECEIVER : Negative Acknowledgement "
<<send[i]<<" sent\n";
}
else
{
cout<<"RECEIVER : Frame "
<<send[i]<<" is lost\n";	
cout<<"[sender timeouts --> Resending the frame]\n";
}
repeat_selective_com_ack[i]='n';
}
}
}
for(int j=0;j<fr_send_at_instance;j++)
{
if(repeat_selective_com_ack[j]=='n')
break;
}
i=0;
for(int k=j;k<fr_send_at_instance;k++)
{	
send[i]=send[k];	
if(repeat_selective_com_ack[k]=='n')
repeat_selective_com_ack[i]='n';
else
repeat_selective_com_ack[i]='p';
i++;
}
if(i!=fr_send_at_instance)
{
for(int k=i;k<fr_send_at_instance;k++)
{
send[k]=arr[sender_window];
sender_window=(sender_window+1)%m;
repeat_selective_com_ack[k]='n';
}
}
cout<<"Want to continue? Yes:y\t No:n\n";
cin>>ch;
cout<<"\n";
if(ch=='y')
 send_repeative(m);
}

int main()
{
selective_repeative sr;
int a=1;
while(a<=2)
   {
 cout<<"1.Print Acknowledgment"<<endl;
 cout<<"2.Print the frame lost"
 <<"and retransmit frames if asked"
<<endl;
 cout<<"3.Exit"<<endl;
cout<<"Enter your choice please : ";
cin>>a;
 switch(a)
 {
 case 1:
sr.case1();
 break;
  case 2:
 sr.case2();
  break;
 default:
 break;
 }
 }
}