#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float p,r,t,ci,si;
    char ch;
    cout<<"Enter Principle (Amount) :: ";
    cin>>p;
    cout<<"\nEnter Rate of Interest :: ";
    cin>>r;
    cout<<"\nEnter Time Period :: ";
    cin>>t;
    cout<<"Enter which intrest do you want to calculate enter c for compound and s for simple intrest. ";
    cin>>ch;

    if(ch=='c')
    {
    ci = p*pow((1+r/100),t);
    cout<<"\nThe Calculated Compound Interest is = "<<ci<<"\n";
    }
    else
    {
        si = (p*t*r)/100;
        cout<<"\nThe Calculated Simple Interest is = "<<si<<"\n";
    }

    return 0;
}