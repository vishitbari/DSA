#include <iostream>
using namespace std;

int main() 
{
    int savings;
    cout<<"Enter your savings : ";
    cin>>savings;

    if(savings > 5000) {
        if(savings > 1000){
            cout<<"You can take her in restaurent.";
        }
        else {
            cout<<"You can take her in a fast food corner.";
        }
    }
    else if(savings > 2500) {
        cout<<"You can date him.";
    }
    else {
        cout<<"Earn more money.";
    }
    return 0;
}
