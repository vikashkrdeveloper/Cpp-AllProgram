#include <iostream>

using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the User number : ";
    cin >> UserInputNumber;
    int Gp = 1;
    for (int i = 1; i <= UserInputNumber; i++)
    {
        cout << Gp << " ";
        Gp *= 2;
    }

    return 0;
}