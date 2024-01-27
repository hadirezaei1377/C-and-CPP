#include <iostream>
using namespace std;

int main()
{
	const int password = 123456;
	cout << "Please enter password:\n";
	int pass;
	cin >> pass;
	if (pass == password)
	{
		cout << "Congartulations\n";
		double a, b, c, d;
		int counter = 0;
		L:
		cout << "please enter your marks:\n";
		cin >> a >> b >> c >> d; // multi variables
		double avg = (a + b + c + d) / 4;
		cout << "Average = " << avg << endl;
		counter++;
		if (counter < 3)
		{
			cout << "You entered marks for " << counter << " students\n";
			goto L;

		}
		

	}
	else
	{
		cout << "Wrong password!\a\n";
	}

	system("pause");
	return 0;
}