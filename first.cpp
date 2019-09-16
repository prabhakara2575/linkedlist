#include<iostream>
using namespace std;
class Employee
{
private:
string emp_name;;
string emp_code;
double sales;
double basic_salary;
public:
Employee ();
void setdata (string, string,long double, double);
void printfixed ();
void printincentive ();
};

Employee::Employee ()
{
emp_name = "abc";
emp_code = "0000";
sales = 0;
basic_salary = 0;
}

void
Employee::setdata (string n, string c,long double s, double sa)
{
emp_name = n;
emp_code = c;
sales = s;
basic_salary = sa;

}


void
Employee::printfixed ()
{
double ctc;
ctc = basic_salary;
cout <<ctc;
}

void
Employee::printincentive ()
{
double hra, ctc;
ctc = basic_salary;
hra = 0.3 * basic_salary;
if ((hra + basic_salary) > 500000)
{
ctc = ctc + 100000;
}
if (sales > 2000000)
{
ctc = ctc + (0.1 * sales);
}

cout <<"Name:"<<emp_name<<"\t"<<"Code:"<<emp_code<<"\t"<<"Basic Salary:"<<basic_salary<<"\t"<<"Incentice pay:"<<ctc;
}

int
main ()
{
Employee e;
e.setdata ("Ranjith", "a1b2", 2500000, 400000);
cout << "fixed salary:";
e.printfixed ();
cout << endl;
cout << "incentive salary:\n";
e.printincentive ();
cout << endl;
return 0;
}
