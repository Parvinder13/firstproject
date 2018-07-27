#include<iostream>
using namespace std;
int main()
{
    float gallons,cufeet;
    cout << "Enter quantity in gallons:" << endl;
    cin >> gallons;
    cufeet = gallons/7.481;
    cout << "Equivalent in cubic feet is:" << endl << cufeet;
    return 0;
}
