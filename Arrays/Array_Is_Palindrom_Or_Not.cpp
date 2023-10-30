#include <iostream>
using namespace std;

int main()
{

    int arr[5];
    int length = sizeof(arr) / sizeof(int);
    bool palindrom = true;
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Enter the number element "<<i<<" : " ;
        cin >> arr[i];
    }

    for (int i = 0; i <= (length / 2) - 1; i++)
    {
        if (arr[i] != arr[length - 1 - i])
        {
            palindrom = false;
            break;
        }
    }
    if (palindrom)
        cout << "Palindrom number";
    else
        cout << "Not Palindrom Number";
    return 0;
}