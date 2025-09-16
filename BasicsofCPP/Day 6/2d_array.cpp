#include <iostream>
using namespace std;

int main()
{
    int j, v;
    cout<<"Enter no. of rows : ";
    cin>>j;
    cout<<"Enter no. of columns : ";
    cin>>v;

    int array[j][v];

    for(int n = 0; n < j; n++){
        for(int m = 0; m < v; m++){
            cin>>array[n][m];
        }
    }

    for(int n = 0; n < v; n++){
        for(int m = 0; m < j; m++){
            cout<<array[n][m]<<"    ";
        }
        cout<<endl;
    }
}
