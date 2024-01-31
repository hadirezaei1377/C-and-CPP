#include <iostream>
using namespace std;

int main()
{
	cout << "salam" << endl;

	char c[6] = "salam";
	cout << c << endl;

	char c2[] = { 'p', 'r', 'o' , 'g', 'r', 'a', 'm' , '\0'};
	cout << c2 << endl;

	char str[10];

	//cin >> str;

	cin.get(str,10);
	cin.ignore(1);
	cout << str << endl;
	cout << c2 << endl;

	char str2[20];

	cin.get(str2, 20);

	cout << str2 << endl;



	system("pause");
	return 0;
}