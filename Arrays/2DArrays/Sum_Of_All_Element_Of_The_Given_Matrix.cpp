#include <iostream>
using namespace std;

int main()
{
    int arr[2][2];
    int sum = 0;
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

            sum += arr[i][j];
        }
        cout << endl;
    }
    cout << sum << "  ";
    return 0;
}