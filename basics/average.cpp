#include <iostream>
using namespace std;

int main()
{
	const int password = 123456;
    string username;

	cout << "Please enter username and password:\n";
	int pass;
	cin >> pass;
	if (pass == password)
	{
		cout << "Congartulations\n";
		double a, b, c, d;
		int counter = 0;
		L:
		cout << "please enter marks:\n";
		cin >> a >> b >> c >> d;
		double avg = static_cast <double> (a + b + c) / 4;
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
