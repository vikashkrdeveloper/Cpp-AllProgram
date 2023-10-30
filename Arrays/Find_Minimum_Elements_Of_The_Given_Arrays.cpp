#include <iostream>
using namespace std;

int main()
{
    int arr[3];
    int arraylength = sizeof(arr) / sizeof(int);
    int min =arr[0];
    for (int i = 0; i <= arraylength - 1; i++)
    {
        cout << "Enter the value Of arrays elements : ";
        cin >> arr[i];
    }
    for (int i = 0; i <= arraylength - 1; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min;

    return 0;
}