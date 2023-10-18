#include <iostream>

using namespace std;
int main()
{
    int ArithmeticOperation;
    int FirstNumberInput;
    int SecondNumberInput;
    cout << "Enter the Arithmetic Perform  : ";
    cin >> ArithmeticOperation;
    cout << "Enter the Number first : ";
    cin >> FirstNumberInput;
    cout << "Enter the Number Second : ";
    cin >> SecondNumberInput;
    switch (ArithmeticOperation)
    {
    case 1:
    {
        cout << FirstNumberInput + SecondNumberInput;
        break;
    }
    case 2:
    {
        cout << FirstNumberInput - SecondNumberInput;
        break;
    }
    case 3:
    {
        cout << FirstNumberInput * SecondNumberInput;
        break;
    }
    case 4:
    {
        cout << FirstNumberInput / SecondNumberInput;
        break;
    }
    default :{
        cout<<" Enter valid Arithmetic Operations ";
    }
    }
    return 0;
}