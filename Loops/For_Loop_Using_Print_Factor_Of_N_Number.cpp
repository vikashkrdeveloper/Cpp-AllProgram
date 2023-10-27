#include <iostream>
using namespace std;
int main()
{
    int UserNumberInput;
    cout << "Enter the number : ";
    cin >> UserNumberInput;
    for (int i = 1; i <= UserNumberInput/2; i++)
    {
        if (UserNumberInput % i == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}