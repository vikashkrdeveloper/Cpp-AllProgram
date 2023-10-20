#include <iostream>

using namespace std;
int main()
{

    int UserInputNumber;
    int reverseNumber = 0;
    int totalnumberOfSum = 0;
    int lastDigit;
    cout << "Enter the number : ";
    cin >> UserInputNumber;

    while (UserInputNumber != 0)
    {
        lastDigit = UserInputNumber % 10;
        totalnumberOfSum += lastDigit+lastDigit;
        UserInputNumber /= 10;
        reverseNumber = reverseNumber * 10 + lastDigit;
    }
    cout << totalnumberOfSum;

    // cout << reverseNumber;
    return 0;
}