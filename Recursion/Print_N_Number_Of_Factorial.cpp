#include <iostream>
using namespace std;
int factroialfun(int UserInputNumber)
{
    if (UserInputNumber == 0)
        return 1;
    return UserInputNumber * factroialfun(UserInputNumber - 1);
}
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    int factroial = factroialfun(UserInputNumber);
    cout << factroial;
    return 0;
}