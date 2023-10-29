#include <iostream>
using namespace std;
void PrintNumber(int toNumber, int UserNumber)
{
    if (toNumber > UserNumber)
    {
        return;
    }
    cout << toNumber << endl;
    PrintNumber(toNumber+1, UserNumber);
}
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    PrintNumber(1, UserInputNumber);
    return 0;
}