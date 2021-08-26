#include<iostream>
using namespace std;

int main()
{
    float radius;
    cout<<"Enter the radius of your circle in cm. ";
    cin>>radius;
    cout<<"Entered radius is: "<<radius<<" cm."<<endl;

    float area = (3.14*radius*radius);
    cout<<"Area of the circle with radius: "<<radius<<" is: "<<area<<endl;
    return 0;
}