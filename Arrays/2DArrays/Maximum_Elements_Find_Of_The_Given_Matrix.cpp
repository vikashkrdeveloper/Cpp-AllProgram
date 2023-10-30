#include <iostream>
using namespace std;

int main()
{
    int arr[2][2];
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = 0; j <= length - 1; j++)
        {
            cout << "Enter the  Number of Elements " << i << " --> " << j << " : ";
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = 0; j <= length - 1; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
        cout << endl;
    }
    cout << max << "  ";
    return 0;
}