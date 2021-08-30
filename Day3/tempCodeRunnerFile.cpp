#include <iostream>
using namespace std;

int main(){
	// your code goes here
int arr[5];
cout<<"Enter the numbers"<<endl;

//store input from user to array
for( int i = 0; i<5;++i){
    cin>>arr[i];
}
cout<<"The numbers are as:"<<endl;
//print array elements

for(int n =0; n<5; ++n){
    cout<<arr[n]<<" ";
}

	return 0;
}