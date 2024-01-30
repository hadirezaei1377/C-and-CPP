#include <iostream>
using namespace std;

int main()
{
	int input = 0;
	int square = 1;
	int cube = 1;
s
	cout << "enter a number: ";
	cin >> input;

	for (int i = 0; i < 2; i++)
	{
		square *= input;
	}

	for (int i = 0; i < 3; i++)
	{
		cube *= input;
	}

	cout << "set of squares = " << square << endl;
	cout << "set of cubes = " << cube << endl;

	system("pause");
	return 0;
}