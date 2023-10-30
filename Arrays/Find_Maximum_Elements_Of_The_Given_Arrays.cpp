#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int arraylength = sizeof(arr) / sizeof(int);
    int max = 0;
    for (int i = 0; i <= arraylength - 1; i++)
    {
        cout << "Enter the value Of arrays elements : ";
        cin >> arr[i];
    }
    for (int i = 0; i <= arraylength - 1; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << max;

    return 0;
}