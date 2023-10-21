#include <iostream>
using namespace std;

int main()
{
    int UserInputnumber;
    cout << "Enter the Number : ";
    cin >> UserInputnumber;
    for (int i = 1; i <= UserInputnumber; i++)
    {
        for (int j = 1; j <= UserInputnumber - i ; j++)
        {

            cout << "   ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << char('A'+k-1)<<"  ";
        }
        cout << endl;
    }

    return 0;
}