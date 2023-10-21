#include <iostream>
using namespace std;

int main()
{
    int UserNumberInput;
    cout << "Enter the number : ";
    cin >> UserNumberInput;
    int space = UserNumberInput / 2;
    int star = 1;
    int middle = (UserNumberInput / 2) + 1;
    for (int i = 1; i <= UserNumberInput; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= star; k++)
        {
            cout << "*" ;
        }
        if (i < middle)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
        }

        cout << endl;
    }

    return 0;
}