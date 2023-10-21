#include <iostream>
using namespace std;

int main()
{
    int UserNumberInput;
    cout << "Enter the number : ";
    cin >> UserNumberInput;
    int spaces = 1;
    int rightstar = UserNumberInput;
    for (int i = 1; i <= 2 * UserNumberInput + 1; i++)
    {
        cout << " * ";
    }
    cout << endl;
    for (int i = 1; i <= UserNumberInput; i++)
    {
        for (int j = 1; j <= rightstar; j++)
        {
            cout << " * ";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "   ";
        }

        for (int j = 1; j <= rightstar; j++)
        {
            cout << " * ";
        }
        rightstar--;
        spaces += 2;

        cout << endl;
    }

    return 0;
}