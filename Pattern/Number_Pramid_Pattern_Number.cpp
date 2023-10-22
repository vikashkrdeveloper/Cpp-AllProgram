#include <iostream>
using namespace std;

int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    int Space = 1;
    int Stars = UserInputNumber;
    for (int i = 1; i <= 2 * UserInputNumber + 1; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    for (int i = 1; i <= UserInputNumber; i++)
    {
        int a = UserInputNumber;
        for (int j = 1; j <= Stars; j++)
        {
            cout << j << " ";
        }
        for (int j = 1; j <= Space; j++)
        {
            cout << "  ";
            a--;
        }
        for (int j = 1; j <= Stars; j++)
        {
            cout << a + i << " ";
            a--;
        }
        Space += 2;

        Stars--;
        cout << endl;
    }

    return 0;
}