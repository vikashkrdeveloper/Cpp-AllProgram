#include <iostream>
using namespace std;

int main()
{
    int UserInputNumberRow;
    cout << "Enter the number Row : ";
    cin >> UserInputNumberRow;

    for (int i = 1; i <= UserInputNumberRow; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i <<" ";
        }

        cout << endl;
    }

    return 0;
}