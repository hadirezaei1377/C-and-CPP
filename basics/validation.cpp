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
		cout << "you entered succesfully\n";
		
	}
	else
	{
		cout << "Wrong password!\a\n";
	}

	system("pause");
	return 0;
}