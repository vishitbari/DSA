#include <iostream>
using namespace std;

int main()
{
    cout<<"This program is to find the greatest number."<<endl;
    int a, b, c;
    
    cout<<"Enter three numbers : "<<endl;
    cin>>a>>b>>c;

    if(a > b) {
        if(a > c){
            cout<<a<<" is the greated number.";
        }
        else{
            cout<<c<<" is the greatest number.";
        }
    }
    else{
        if(b > c) {
            cout<<b<<" is the greatest number.";
        }
        else {
            cout<<c<<" is the greatest number.";
        }
    }

    return 0;
}
