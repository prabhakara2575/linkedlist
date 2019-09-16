using namespace std;
#include<iostream>
static int x=0;
class A{
public: A()
{
++x;	
cout<<x<<endl;

}
~A()
{

cout<<"Destructor called"<<endl<<x*x<<endl;
x--;	
}
};

int main()
{
A obj1[5];
}
