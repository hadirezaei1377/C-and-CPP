#include <iostream> // give four numbers 
#include <fstream>  // we want to read data from inp.txt and write procceced data to out.txt
using namespace std; 

int main()
{
	int sum = 0, inp, counter = 1;

	double avg = 0;

	ifstream fin; 
	ofstream fout;
// ifstream and ofstream working to files(source of data)
	fin.open("inp.txt"); 
	fout.open("out.txt");

	int fsum = 0, finp;
	double favg = 0;
	
	if (!fin.is_open() || !fout.is_open())
	{
		cout << "could not open at least one of the files\n";
		system("pause");
		return 0; // if this work doesnt done, close the program here
	}
	else
	{

// when we use finp or fsum we are working with files

	L:
		if (counter < 5)
		{
			cout << "input the number " << counter++ << ": \n";
			cin >> inp;
			sum += inp;

			fin >>  finp;
			fsum += finp;
			goto L;
		}
		counter--;

		avg = static_cast <double> (sum) / counter;
		favg = static_cast <double> (fsum) / counter;


		cout << "avg= " << avg << endl;
		fout << "file avg= " << favg << endl;



		fin.close();
		fout.close();
	}
	system("pause");
	return 0;
}