#include <iostream>
using namespace std;

int main()
{
    int UserInputnumber;
    cout << "Enter the Number : ";
    cin >> UserInputnumber;
    for (int i = 1; i <= UserInputnumber; i++)
    {
        for (int j = 1; j <= UserInputnumber - i; j++)
        {

            cout << "   ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << " * ";
        }
        for (int k = 1; k <= i - 1; k++)
        {
            cout << " * ";
        }

        cout << endl;
    }
    for (int i = UserInputnumber; i >= 1; i--)
    {
        for (int j = 1; j <= UserInputnumber - i; j++)
        {
            cout << "   ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " * "  ;
        }

        cout << endl;
    }

    return 0;
}