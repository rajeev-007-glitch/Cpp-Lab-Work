#include<iostream>
using namespace std;

int linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]==key)
        {
            return i+1;
        }
        
    }
        return -1;
}
int main()
{
    int n;
    int key;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;


    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the value of "<<i<<" th element of array: ";
        cin>>arr[i];
        cout<<endl;
    }

    cout<<"Enter the element to be searched: ";
    cin>>key;
    cout<<endl;

    int r = linearsearch( arr, n, key);
    if (r==-1)
    {
        cout<<"Element not found."<<endl;
    }
    else
    {
        cout<<"Element found at position: "<<r<<endl;
    }
    
    
    return 0;
}