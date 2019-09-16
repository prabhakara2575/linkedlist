#include<iostream>
using namespace std;
int square(int x){ return x*x;}
double square(double x){ return x*x;}
int main()
{
cout<<"Square of integer7 is "<<square(7)<<endl<<"Square of integer7.5 is "<<square(7.5)<<endl;
return 0;
}
