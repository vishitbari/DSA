#include <iostream>
using namespace std;

int main()
{
    cout<<"This program is to check whether the number is odd or even."<<endl;
    int n;
    cout<<"Enter the number : ";
    cin>>n;

    if(n % 2 == 0) {
        cout<<"The number is even.";
    }
    else {
        cout<<"The number is odd.";
    }

    return 0;
}