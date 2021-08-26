#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "\n enter the first no x: ";
    cin >> x;
    cout << "\n enter the first no y: ";
    cin >> y;
    cout << "\n enter the first no z: ";
    cin >> z;
    if (x > y && x > z)
    {
        cout << "first no is greatest: " << endl
             << "which is = " << x;
    }
    else if (y > x && y > z)
    {
        cout << "second no is greatest:" << endl
             << "which is =" << y;
    }
    else
    {
        cout << "third no is greatest:" << endl
             << "which is =" << z;
    }
    return 0;
}