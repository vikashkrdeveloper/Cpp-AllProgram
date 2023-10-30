#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int sumEven = 0;
    int sumOdd = 0;
    int totalelements;
    for (int i = 0; i <= (sizeof(arr) / sizeof(int)) - 1; i++)
    {
        cout << "Enter the number Elements : ";
        cin >> arr[i];
    }
    for (int i = 0; i <= (sizeof(arr) / sizeof(int)) - 1; i++)
    {
        if (i % 2 == 0)
            sumEven += arr[i];
        else
            sumOdd += arr[i];
    }
    cout << "Sum of Even Elements  : " << sumEven << endl;
    cout << "Sum of odd Elements  : " << sumOdd << endl;
    totalelements = sumEven - sumOdd;
    cout << "Total number : " << totalelements;

    return 0;
}