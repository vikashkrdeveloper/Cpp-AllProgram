#include <iostream>
using namespace std;
void PrintNumber(int UserInputNumber)
{
    if (UserInputNumber==0)
    {
        return;
    }
    PrintNumber(UserInputNumber-1);
    cout << UserInputNumber << endl;
}
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    PrintNumber(UserInputNumber);
    return 0;
}