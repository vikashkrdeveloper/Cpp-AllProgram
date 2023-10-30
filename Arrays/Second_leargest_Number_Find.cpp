#include <iostream>
using namespace std;

int main()
{
    int arr[5];

    for (int i = 0; i <= sizeof(arr) / sizeof(int); i++)
    {
        cout << "Enter the number arrays elemens " << i << " : ";
        cin >> arr[i];
    }
    int large = arr[0];
    int secondlarge = arr[0];
    for (int i = 0; i <= (sizeof(arr) / sizeof(int)) - 1; i++)
    {
        if (large < arr[i])
            large = arr[i];
    }
    for (int i = 0; i <= (sizeof(arr) / sizeof(int)) - 1; i++)
    {
        if (secondlarge < arr[i])
        {
            if (arr[i] != secondlarge)
                secondlarge = arr[i];
        }
    }
    cout << secondlarge;
    return 0;
}