#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of array : " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "The elements of array are : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "\nMINIMUM : " << min;
    cout << "\nMAXIMUM : " << max;

    return 0;
}