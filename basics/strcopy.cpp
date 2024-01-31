#include <iostream>
using namespace std;

int main()
{
	char txt[100];
	char cpy[100];
	cin.get(txt, 100);
	
	int i = 0;
 	for (i = 0; i < 100  && txt[i]!= '\0'; i++)
 	{
		cpy[i] = txt[i]; 
 	}
	cpy[i] = '\0';

	cout << "txt = " << txt << endl;
	cout << "copy = " << cpy << endl;
	



	system("pause");
	return 0;
}