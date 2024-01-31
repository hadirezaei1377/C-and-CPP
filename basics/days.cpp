#include <iostream>
using namespace std;

#define month_num 12


int main()
{
	int months[] = { 31, 31, 31, 31, 31, 31, 30, 30, 30, 30, 30, 30 };

	cout << "please enter the month number: ";
	int month;
	cin >> month;
	cout << "Enter the day number: ";
	int day;
	cin >> day;
	int totaldays = 0;
	for (int i = 0; i < month-1 ; i++)
	{
		totaldays += months[i];
	}
	totaldays += day;

	cout << totaldays << " days of year has been past\n";

	system("pause");
	return 0;
}