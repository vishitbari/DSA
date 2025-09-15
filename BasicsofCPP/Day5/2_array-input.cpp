#include <iostream>
using namespace std;

int main()
{
    int n;
    int array[n];
    cout<<"Enter the size of array : ";
    cin>>n;

    for(int i=1; i <= n; i++){
        cout<<"Enter array elements : ";
        cin>>array[i];
    }

    cout<<"The entered array elements are : ";
    for(int i=1; i <= n; i++){
        cout<<array[i]<<" ";
    }
    
}