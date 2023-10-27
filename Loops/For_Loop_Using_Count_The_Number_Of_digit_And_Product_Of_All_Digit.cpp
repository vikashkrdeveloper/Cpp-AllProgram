#include <iostream>

using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the Number : ";
    cin >> UserInputNumber;
    int i = 0;
    int lastdigit;
    int sum = 1;
    while (UserInputNumber != 0)
    {
        lastdigit=UserInputNumber%10;
        UserInputNumber/=10;
        sum*=lastdigit;
    }
    cout << sum;

    return 0;
}