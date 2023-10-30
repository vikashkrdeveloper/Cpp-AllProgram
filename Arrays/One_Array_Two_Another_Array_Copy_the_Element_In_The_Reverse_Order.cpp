#include <iostream>
using namespace std;

int main()
{
    int arr1[5];
    int arr2[5];
    int arrayLength=sizeof(arr1) / sizeof(int);
    for (int i = 0; i <= (sizeof(arr1) / sizeof(int)) - 1; i++)
    {
        cout << "Enter the number Elements : ";
        cin >> arr1[i];
    }
    for (int i = 0; i <=arrayLength- 1; i++)
    {
        arr2[i]=arr1[arrayLength-i-1];

    }
    for (int i = 0; i <=arrayLength- 1; i++)
    {
       cout<<arr2[i]<<" ";

    }

    return 0;
}