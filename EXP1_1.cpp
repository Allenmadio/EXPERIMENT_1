#include <iostream>
#include <conio.h>
#include <string>
#include<iomanip>
using namespace std;


int main()
{
	float a, b, c, d;
	

	cout << "Enter number of tickets sold for Box: " << endl;
	cin >> a;
	cout << "For Box: " << setprecision(2) << fixed << a * 250  << endl;
	cout << "Enter number of tickets sold for Sideline: " << endl;
	cin >> b;
	cout << "For Sideline: " << setprecision(2) << fixed << b * 100  << endl;
	cout << "Enter number of tickets sold for Premium: " << endl;
	cin >> c;
	cout << "For Premium: " << setprecision(2) << fixed  << c * 50  << endl;
	cout << "Enter number of tickets sold for General Admission: " << endl;
	cin >> d;
	cout << "For General Admission: " << setprecision(2) << fixed << d * 25  << endl;



	cout << "Total number of sales: " << a * 250 + b * 100 + c * 50 + d * 25 << setprecision(2) << fixed <<endl;


	return 0;
}