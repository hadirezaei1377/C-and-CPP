#include <iostream>
using namespace std;

int main()
{
	int i[5] = {1,2,3,4,5.5};
	float f[10] = {36.53,17.75};
	char c[12] = { 0 };
	double d[17] = {};

	int a[4][5] = {};

	for (int j = 0; j < 2; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			a[j][k] = j * k;
		}
	}

	for (int j = 3; j < 4; j++)
	{
		for (int k = 0; k < 3; k++)
		{
			cout << "please enter the numkber for the element[" << j << "][" << k << "]:";
			cin >> a[j][k];
		}
	}


	system("pause");
	return 0;
}