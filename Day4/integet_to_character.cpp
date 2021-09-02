#include<iostream>
using namespace std;

int main()
{
    char c = 'A';

    for(int i = 'A'; i <= 'Z'; i++){
        cout<<"The integer value of character "<<char(i)<<" is "<<i<<endl;
    }

        for(int i = 'a'; i <= 'z'; i++){
        cout<<"The integer value of character "<<char(i)<<" is "<<i<<endl;
    }
    return 0;
}