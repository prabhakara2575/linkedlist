#include<iostream>
using namespace std;

class date{
public:
	Date(int = 1, int = 1, int = 1990 );
	void print();
private:
	int month;
	int day;
	int year;
};

Date::Date (int m, int d, int y)
{
	month = m;
	day = d;
	year = y;
	
}

int main()
{
	Date date19 7,4, 1993), date2;

	cout << "date1 =";
	date1.print();
	cout << "\ndate2 =";
	date2.print();

	date2 = date1;
	cout << "\n\nafter default memberwise copy,");
	date2.print();
	cout < endl;
return 0;
}
