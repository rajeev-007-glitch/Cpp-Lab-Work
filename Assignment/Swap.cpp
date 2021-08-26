#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Enter the numbers to be swaped. ";
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

    cout<<"The value of a is: "<<a<<" and b is: "<<b<<endl;

    int temp = a;
    a = b;
    b = temp;

    cout<<"The value after swaping of a and b is as follow: "<<endl;
    cout<<" a = "<<a;
    cout<<" and b = "<<b;


    return 0;
}