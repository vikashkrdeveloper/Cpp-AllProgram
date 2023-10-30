#include <iostream>
using namespace std;

int main()
{
    int arr[4][4];
    // int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (j == 0)
            {
                cout << "Enter the Students Roll Number : " << i << " : " << j << " : ";
                cin >> arr[i][j];
            }
            else
            {

                cout << "Enter the Students  marks :" << i << " : " << j << " : ";
                cin >> arr[i][j];
            }
        }
    }
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            if (j == 0)
            {
                cout << "Students Roll Number : " << i << " : " << j << " : " << arr[i][j] << endl;
            }
            else
            {

                cout << "Students  marks :" << i << " : " << j << " : " << arr[i][j] << endl;
            }
        }
        cout << endl;
    }

    return 0;
}