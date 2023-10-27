#include <iostream>
using namespace std;
int calculatefactorial(int Input)
{
    int fact = 1;
    for (int i = 1; i <= Input; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int UserInputNumber;
    cout << " Enter the number : ";
    cin >> UserInputNumber;
    for (int i = 0; i < UserInputNumber; i++)
    {
        for (int j = 0; j <UserInputNumber - i ; j++)
        {
            int NumberOfN = calculatefactorial(UserInputNumber - i-1);
            int NumberOfR = calculatefactorial(j);
            int NumberOfNNegativeR = calculatefactorial(UserInputNumber - i-1 - j);
            int CalculateNce = NumberOfN / (NumberOfR * NumberOfNNegativeR);
            cout << CalculateNce << " ";
        }
        cout << endl;
    }

    return 0;
}