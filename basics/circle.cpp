#include <iostream>
using namespace std;

const float pi = 3.14;

int main() 
{
    float radius = 0;
    cout << "please enter the radius size:\n";
    cin >> radius;

    float p = 0, s = 0;
    p = 2 * pi * radius;
    s = (radius)^2 * pi;

    cout << "The circumference of the circle is equal to: " << p << endl:
    cout << "The area of ​​the circle is equal to: " << s << endl:

    system("pause");
    return 0;

}