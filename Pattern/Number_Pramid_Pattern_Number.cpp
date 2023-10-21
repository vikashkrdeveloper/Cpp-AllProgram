#include <iostream>
using namespace std;

int main()
{
    int UserNumberInput;
    cout << "Enter the number : ";
    cin >> UserNumberInput;
    int stars = UserNumberInput;
    int spaces = 1;
    for (int i = 1; i <= 2 * UserNumberInput + 1; i++)
    {
    }
    cout << endl;

    for (int i = 1; i <= UserNumberInput; i++)
    {
        int a = UserNumberInput;

        for (int j = 1; j <= stars; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << "  ";
            a--;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << j - a << " ";
            a--;
        }
        stars--;
        spaces += 2;
        cout << endl;
    }

    return 0;
}