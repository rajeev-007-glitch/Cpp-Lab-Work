// C++ implementation of the above approach
#include<bits/stdc++.h>
using namespace std;

void check(char ch)
{

	if (ch >= 'A' && ch <= 'Z')
		cout<< ch << " is an UpperCase character\n";

	else if (ch >= 'a' && ch <= 'z')
	cout<< ch << " is an LowerCase character\n";

    else if (ch >= '0' && ch <= '0')
	cout<< ch << " is an Numeric chracter\n";			

	else
		cout<< ch << " is nor an aplhabetic character nither an numeric. \n";
			
}

int main()
{
	char ch;
    cout<<"Enter your chracter: ";
    cin>>ch;
    cout<<"Your character is: "<<ch<<endl;
	check(ch);

	return 0;
}
