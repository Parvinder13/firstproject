#include <iostream>
using namespace std;
int main()
{
    float speed;
    cout << "Enter the speed of the vehicle :" << endl;
    cin >> speed;
    if(speed<65)
        cout << "Vehicle is within speed limit and under control";
    else
        cout << "Vehicle is over speed limit and in danger";
        return 0;
}
