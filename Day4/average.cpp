#include<iostream>
using namespace std;

int main()
{
    float res;
    int marks[5];
    for(int i = 0; i < 5; i++){
        cout<<"Enter the marks of sub "<<i<<" : ";
        cin>>marks[i];
    }
        int total = 0;
    for(int i = 0; i < 5; i++){
        total += marks[i];
    }
         res = total/5;
    cout<<"Your result is for following numbers is "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<" Sub m["<<i<<"] is: "<<marks[i]<<endl;
    }
    cout<<res<<" %";
       
    return 0;
}