#include <iostream>
using namespace std;

int main()
{
	int x, size_var, size_type;
	x = 5;
	size_var = sizeof x;
	x = 5000;
	size_var = sizeof x;
	x = 999999;
	size_var = sizeof x;
	size_type = sizeof (char);
	return 0;
}
