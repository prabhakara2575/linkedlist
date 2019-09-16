#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int rollDice(void);

int main()
{
enum Status{CONTINUE,WON,LOST};
int sum,myPoint;
Status gameStatus;

srand(time(0));
sum=rollDice();

switch(sum){
case 7:
case 11:
gameStatus=WON;
break;
case 2:
case 3:
case 12:
gameStatus=LOST;
break;
default: gameStatus=CONTINUE;
myPoint=sum;
cout<<"Point is "<<myPoint<<endl;
}
while(gameStatus==CONTINUE)
{
sum=rollDice();
if(sum==myPoint)
{
gameStatus=WON;}
else
   if(sum==7)
gameStatus=LOST;
}
if(gameStatus==WON)
{
cout<<"Player wins"<<endl;
}
else
cout<<"Player loses"<<endl;
return 0;
}
int rollDice(void)
{
int die1,die2,workSum;
die1=1+rand()%6;
die2=1+rand()%6;
workSum=die1+die2;
cout<<"Player rolled"<<"+"<<die2<<"="<<workSum<<endl;
return workSum;
}
