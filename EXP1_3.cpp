#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	float nb, p, d1, d2, ir, avgdb, i;
	cout << "Enter current net balance: " << endl;
	cin >> nb;
	cout << "Enter total payment: " << endl;
	cin >> p;
	cout << "Enter days in the billing cycle" << endl;
	cin >> d1;
	cout << "Enter number of days payment is made before billing cycle" << endl;
	cin >> d2;
	cout << "Enter interest rate" << endl;
	cin >> ir;
	avgdb = (nb * d1 - p * d2) / d1;
	i = (avgdb * ir);
	cout << "Current interest = " << setprecision(4) <<i << endl;

	getch();
	return 0;
}