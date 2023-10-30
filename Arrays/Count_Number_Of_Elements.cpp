#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int count=0;
    int UserNumber;
    cout<<"Enter the number : ";
    cin>>UserNumber;
    for (int i = 0; i <= (sizeof(arr) / sizeof(int)) - 1; i++)
    {
        cout << "Enter the number Elements : ";
        cin >> arr[i];
    }
    for (int i = 0; i <= (sizeof(arr) / sizeof(int)) - 1; i++)
    {
        if(UserNumber<arr[i]) count++;
    }
     cout<< count;

    return 0;
}