#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter any two number: ";
    cin >> a ;

    if (a%2==0)
    {
        cout<<"Number is even";
    }
    else
    {
        cout<<"Number is odd";
    }
    
    return 0;
}