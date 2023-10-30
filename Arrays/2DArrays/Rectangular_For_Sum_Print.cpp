#include <iostream>
using namespace std;

int main()
{
    int arr[4][4];
    int sum = 0;
    int length = sizeof(arr) / sizeof(arr[0]);
    int FirstCoordinates = 1;
    int FirstCoordinates2 = 2;
    int SecondCoordinates = 1;
    int SecondCoordinates2 = 2;
    cout << "Enter the FirstCoordinates Number : ";
    cin >> FirstCoordinates;
    cout << "Enter the FirstCoordinates2 Number : ";
    cin >> FirstCoordinates2;
    cout << "Enter the SecondCoordinates Number : ";
    cin >> SecondCoordinates;
    cout << "Enter the SecondCoordinates2 Number : ";
    cin >> SecondCoordinates2;
    for (int i = 0; i <= length - 1; i++)
    {
        for (int j = 0; j <= length - 1; j++)
        {
            cout << "Enter the  Number of Elements " << i << " --> " << j << " : ";
            cin >> arr[i][j];
        }
    }
    for (int i = FirstCoordinates; i <= SecondCoordinates; i++)
    {
        for (int j = FirstCoordinates2; j <= SecondCoordinates2; j++)
        {
            sum += arr[i][j];
        }
        cout << endl;
    }
    cout << sum << "  ";
    return 0;
}