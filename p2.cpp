#include<iostream>
using namespace std;
int maximum(int,int,int);
int main()
{
int a,b,c;
cout<<"Enter the numbers\n";
cin>>a>>b>>c;
cout<<maximum(a,b,c)<<endl;
return 0;
}
 int maximum(int a,int b,int c)
{ 
int max=((a>b)&&(a>c))?  a:((b>c)?  b: c);
return max;
}
