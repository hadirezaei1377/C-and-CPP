#include <iostream>
using namespace std;

int main()
{
	//int input = 0;
	int morabA = 1;
	int mokaAb = 1;


// 	cout << "enter your number: ";
// 	cin >> input;
	for (int input = 1; input <= 10; input++  )
	{
		for (int i = 0; i < 2; i++)
		{
			morabA *= input;
		}

		for (int i = 0; i < 3; i++)
		{
			mokaAb *= input;
		}

		cout << "morabA = " << morabA << endl;
		cout << "mokaab = " << mokaAb << endl;
		morabA = 1, mokaAb = 1;
		


	}
	system("pause");
	return 0;
}