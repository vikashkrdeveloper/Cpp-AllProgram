#include <iostream>
using namespace std;

int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    int spaces = 1;
    int starts = UserInputNumber;
    for (int i = 1; i <= 2 * UserInputNumber + 1; i++)
    {
        cout << i;
    }
    cout << endl;
    for (int i = 1; i <= UserInputNumber; i++)
    {
        int a = 1;
        for (int j = 1; j <= starts; j++)
        {
            cout << a;
            a++;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
            a++;
        }

        for (int j = 1; j <= starts; j++)
        {
            cout << a;
            a++;
        }
        spaces += 2;
        starts--;
        cout << endl;
    }

    return 0;
}