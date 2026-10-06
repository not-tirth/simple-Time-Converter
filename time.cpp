#include <iostream>
using namespace std;

int main()
{
    int hours, minutes, seconds;

    cout << "Enter hours: ";
    cin >> hours;

    minutes = hours * 60;
    seconds = hours * 60 * 60;

    cout << "Minutes = " << minutes << endl;
    cout << "Seconds = " << seconds << endl;

    return 0;
}