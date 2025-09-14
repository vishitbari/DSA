#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number to get the sum till that number : "<<endl;
    cin>>n;

    int sum=0;
    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }
    cout<<"Sum is : "<<sum;
    
}