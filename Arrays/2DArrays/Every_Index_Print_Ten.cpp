#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = 0; j <= length - 1; j++)
        {
            cout << "Enter the  Number of Elements " << i << " --> " << j << " : ";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = 0; j <= length - 1; j++)
        {

            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}