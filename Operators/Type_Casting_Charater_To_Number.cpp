#include <iostream>
using namespace std;
int main()
{
    char NumberTypeChar;
    cout << "Enter the number between 0 and 9 and charater a to z , A to Z :  ";
    cin >> NumberTypeChar;
    int TypecastingCharToNumber = (int)NumberTypeChar;
    cout << "Your SkyValue of : " << TypecastingCharToNumber;

    return 0;
}                                   