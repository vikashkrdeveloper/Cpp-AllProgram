#include <iostream>

using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the User Number : ";
    cin >> UserInputNumber;
    UserInputNumber % 2 == 0 ? cout << UserInputNumber << " is a even number " : cout << UserInputNumber << " is a odd number ";
    return 0;
}