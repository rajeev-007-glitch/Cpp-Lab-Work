#include<iostream>
using namespace std;
float c_f(float);
float f_c(float);
int main()
{
  float temp;
  cout<<"\nEnter tempreture in celsius : ";
  cin>>temp;
  cout<<"Tempreture in fahrenheit is : "<<c_f(temp);
  cout<<"\n\nEnter tempreture in faherenheit : ";
  cin>>temp;
  cout<<"Tempreture in celsius is : "<<f_c(temp);
  return 0;
}
float c_f(float celsius)
{
  float fahrenheit=(celsius*9.0)/5.0+32;
  return fahrenheit;
}
float f_c(float fahrenheit)
{
  float celsius=5.0*(fahrenheit-32)/9.0;
  return celsius;
}