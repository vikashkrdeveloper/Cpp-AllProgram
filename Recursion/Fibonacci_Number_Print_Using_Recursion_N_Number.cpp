#include <iostream>
using namespace std;
int fabonaccifunction(int UsernumberInput)
{
    if (UsernumberInput == 0)
        return 0;
    else if (UsernumberInput == 1)
        return 1;

    return fabonaccifunction(UsernumberInput - 1) + fabonaccifunction(UsernumberInput - 2);
}
int main()
{
    int UserNumberInput;
    cout << "Enter the number : ";
    cin >> UserNumberInput;
    for (int i = 0; i < UserNumberInput; i++)
    {
        int fabonacci = fabonaccifunction(i);
        cout << fabonacci << endl;
    }

    return 0;
}