#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
	const int gerAmi = 10;
	const int bAzeh = 5;

	int gerAmis[gerAmi] = {1,3,4,1,2,1,4,3,1,5};
	int freqs[bAzeh] = {};


	for (int i = 0; i < gerAmi; i++)
	{
		//int index = gerAmis[i]-1;
		++freqs[gerAmis[i] - 1];
	}

	cout << "Vote" << setw(15) << "frequency" << endl;
	for (int i = 0; i < bAzeh; i++)
	{

		cout << setw(4) << i+1 << setw(15)<<freqs[i] << endl;
	}

	system("pause");
	return 0;
}