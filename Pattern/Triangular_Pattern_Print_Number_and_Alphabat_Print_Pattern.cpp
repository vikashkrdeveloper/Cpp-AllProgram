#include <iostream>
using namespace std;

int main()
{
    int UserInputNumberRow;
    char character='A';
    cout << "Enter the number Row : ";
    cin >> UserInputNumberRow;
    for (int i = 1; i <= UserInputNumberRow; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 2 || i == UserInputNumberRow-1)
            {
                cout <<char(character+j-1)<<" ";
            }
            else
            {
                cout << j << " ";
            }
        }

        cout << endl;
    }

    return 0;
}