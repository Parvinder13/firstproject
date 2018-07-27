#include <iostream>
using namespace std;
int main()
{
    float celsius,fahrenheit;
    cout << "Enter the value in celsius :" << endl;
    cin >> celsius;
    fahrenheit = (9*celsius)/5 + 32;
    cout << "Value in Fahrenheit :" << endl << fahrenheit;
    return 0;
}
