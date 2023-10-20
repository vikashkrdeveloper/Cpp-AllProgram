#include <iostream>

using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    for (int i = UserInputNumber/2; i >=1; i--)
    {
        if (UserInputNumber % i == 0)
        {
            cout << i << " ";
            break;
        }
    }
    return 0;
}