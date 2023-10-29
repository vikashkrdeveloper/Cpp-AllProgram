#include <iostream>
using namespace std;
int power(int UserInputNumber, int powers)
{
    if (powers == 0)
        return 1;
    return UserInputNumber * power(UserInputNumber, (powers - 1));
}
int main()
{
    int UserInputNumberFirst;
    int UserInputNumberSecond;
    cout << "Enter the number First : ";
    cin >> UserInputNumberFirst;
    cout << "Enter the number Second : ";
    cin >> UserInputNumberSecond;
    int powercalculate = power(UserInputNumberFirst, UserInputNumberSecond);
    cout << powercalculate;
    return 0;
}