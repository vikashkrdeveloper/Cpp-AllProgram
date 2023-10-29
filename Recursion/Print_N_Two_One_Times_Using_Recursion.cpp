#include <iostream>
using namespace std;
void PrintNumber(int UserNumber)
{
    cout << UserNumber << endl;
    if (UserNumber == 1)
    {
        return;
    }
    PrintNumber(UserNumber - 1);
}
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    PrintNumber(UserInputNumber);
    return 0;
}