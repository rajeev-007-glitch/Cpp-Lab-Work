#include<iostream>
using namespace std;


int main()
{
  float ar, pr, l, b;

  cout<<"Enter the length and breadth of your rectangle: ";
  cin>>l>>b;

  ar = l*b;
  pr = 2*(l+b);

  cout<<"Area of your rectangle is: "<<ar<<endl
  <<"and the Perimeter is: "<<pr;


  return 0;
}