#include <iostream>
#include <conio.h>
#include<iomanip>
using namespace std;

int main()
{
	float a, b;
	cout << "Input mass: " << endl;
	cin >> a;
	cout << "Mass= " << a << "g" << endl;
	cout << "Input density: " << endl;
	cin >> b;
	cout << "Density= " << b << "g/cm^3" << endl;
	cout << "Volume of the object= " << a / (4 * b) << " cm^3" << setprecision(2) << fixed <<endl;


	getch();
	return 0;
}