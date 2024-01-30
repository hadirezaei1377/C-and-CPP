#include <iostream>
using namespace std;

int main()
{
	int i = 0;
	do 
	{
		i++;
		cout << "before continue" << endl;
		continue;
		break;
		cout << "after continue" << endl;

	} while (i <3);
	cout << "after the loop\n";
	system("pause");
	return 0;
}