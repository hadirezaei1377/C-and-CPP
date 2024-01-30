#include <fstream>
#include <iostream>
using namespace std;

int main()
{
	ifstream fin;
	ofstream hadi;

	fin.open("inp.txt");
	hadi.open("out.txt");

	if (!fin.is_open() || !hadi.is_open())
	{
		cout << "at least one of the files could not be opened\n";
		return 0;
	}
	else
	{
		
		int counter = 0;
		double input=0 , sum = 0;
		double avg;
	L:
		if (!fin.eof())
		{
			fin >> input;
			counter++;
			cout << "I have read "<<counter << " numbers from file this number: " <<input << endl;
			sum += input;
			
			goto L;
		}

		avg = static_cast <double> (sum) / counter;
		cout << "avg = " << avg << endl;
		hadi << "avg = " << avg << endl;

		fin.close();
		hadi.close();
	}


	system("pause");
	return 0;
}