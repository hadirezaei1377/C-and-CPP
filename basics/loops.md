
int main()
{
	for (int i = 1; i <= 10;i++)
	{
		for (int i = 1; i <= 10 ; i++)
		{
			cout << i * i << '\t';
		}
		cout << "\n";
	}
	system("pause");
	return 0;
}

int main()
{
	for (char ch = -128; ch < 127;ch++)
	{
		cout <<static_cast <int> (ch) <<ch << endl;
	
	}

	system("pause");
	return 0;
}

int main()
{
	int j = 2;

	for (float f = 5; f < 100; cout << f*j << endl, f *= 1.5);
	{
		cout << "In the block" << endl;
	}
	cout << "out of the block" << endl;


	system("pause");
	return 0;
}

int main()
{
	//int i = 2;
	for (int i = 1 , int j = 100; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			cout << i*j << "\t";
		}
		cout << endl;
	}
	
	//cout << i << endl;

	system("pause");
	return 0;
}

int main()
{
	unsigned long long int next =0 , last = 1, sum = 0;

	int i = 1;

	while ( next < ULLONG_MAX/2)
	{
		cout << last << endl;
		sum = last + next;
		next = last;
		last = sum;
		i++;
	}

	cout << i << endl;

	system("pause");
	return 0;
}

int main()
{
	int num, digit;
	/*char ans;*/
	while (true)
	{
		cout << "please enter your number: ";
		cin >> num;
		cout << "maghloobesh = ";
		do 
		{
			digit = num % 10;
			cout << digit;
			num /= 10;
		} while (num > 0);
		cout << endl;
	}

	system("pause");
	return 0;
}


important example:

#include "conio.h"  // for special inputs and outputs
#include <iostream>
using namespace std;

int main()
{
	char ch = '\0';
	const int password=4461;
	int input = 0;
	while ((ch=_getch())!=13)
	{
		if (ch >= '0' && ch <= '9')
		{
			cout << '*';
			input *= 10;
			input += ch - 48;
		}
	}
	cout << endl;
	if (password==input)
	{
		cout << "welcome\n";
	}
	else
	{
		cout << "wrong password\n";
	}

	system("pause");
	return 0;
}


#include "stdlib.h"
#include "conio.h"
#include <ctime>
#include <iostream>
using namespace std;

int main()
{

	char ch = '\0';
	srand(time(0));
	while ((ch = _getch()) == 13)
	{
		int rande = (rand() % 6) + 1;
		switch (rande)
		{

		case 1:
		case 3:
		case 5:
			cout << "The dice is odd\n";
			break;
		case 2:
		case 4:
		case 6:
			cout << "The dice is even\n";
			break;
		

		}
	}

	system("pause");
	return 0;
}





#include <iostream>
using namespace std;

int main()
{
	
	for (int i = 1; i < 80; i++)
	{
		char ch = (i % 8 == 0) ? '*' : ' ';
		cout << ch;
	}
	system("pause");
	return 0;
}
