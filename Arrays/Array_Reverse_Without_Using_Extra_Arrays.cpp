#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int arrayLength = sizeof(arr) / sizeof(int);
    for (int i = 0; i <= (sizeof(arr) / sizeof(int)) - 1; i++)
    {
        cout << "Enter the number Elements : ";
        cin >> arr[i];
    }
    int j=arrayLength-1;
    for (int i = 0; i <=j; i++)
    {
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
    for (int i = 0; i <= arrayLength - 1; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}