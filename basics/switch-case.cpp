
#include "stdlib.h" // h used for memory management
#include "conio.h"  // contains console input/output functions 
#include <ctime>    // converts the time value
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
			system("color 10");
			cout << "the dice is 1" << endl;
			break;
		
		case 2:		
			system("color 20");
			cout << "the dice is 2" << endl;
			break;
		
		case 3:		
			system("color 30");
			cout << "the dice is 3" << endl;
			break;
		
		case 4:		
			system("color 40");
			cout << "the dice is 4" << endl;
			break;
		
		case 5:		
			system("color 50");
			cout << "the dice is 5" << endl;
			break;
		
		default:		
			system("color 60");
			cout << "the dice is 6" << endl;
			break;
		

		}
	}

	system("pause");
	return 0;
}

