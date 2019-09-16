#include<iostream>
using namespace std;
int minimum(int,int,int);
int main()
{
int a,b,c;
cout<<"Enter the numbers\n";
cin>>a>>b>>c;
cout<<minimum(a,b,c)<<endl;
return 0;
}
 int minimum(int a,int b,int c)
{ 
int min=((a<b)&&(a<c))?  a:((b<c)?  b: c);
return min;
}
