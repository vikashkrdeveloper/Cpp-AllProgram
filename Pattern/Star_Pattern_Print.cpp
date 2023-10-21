#include <iostream>
using namespace std;

int main()
{

    int UserinputRow;
    int UserinputColoum;
    cout << "Enter the number of row : ";
    cin >> UserinputRow;
    cout << "Enter the number of coloum : ";
    cin >> UserinputColoum;
    for (int i = 1; i <= UserinputRow; i++)
    {
        for (int j = 1; j <= UserinputColoum; j++)
        {
            if (i == UserinputRow/2+1 || j == UserinputColoum/2+1 )
            {
                cout << " * ";
            }
            else
            {
                cout << "   ";
            }
        }
        cout << endl;
    }

    return 0;
}