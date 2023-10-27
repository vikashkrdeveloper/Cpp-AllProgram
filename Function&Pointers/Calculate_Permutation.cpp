#include <iostream>
int factCalculate(int FirstNumber)
{
    int LastNumberFact = 1;
    for (int i = 1; i <= FirstNumber; i++)
    {
        LastNumberFact *= i;
    }
    return LastNumberFact;
}
using namespace std;
int main()
{
    int UserInputNumberFirst;
    int UserInputNumberSecond;
    cout << "Enter the number First : ";
    cin >> UserInputNumberFirst;
    cout << "Enter the number Second : ";
    cin >> UserInputNumberSecond;
    int LastNumber = UserInputNumberFirst - UserInputNumberSecond;
    int combination;
    int First = factCalculate(UserInputNumberFirst);
    int Third = factCalculate(LastNumber);
    combination = First / Third;
    cout << combination;

    return 0;
};