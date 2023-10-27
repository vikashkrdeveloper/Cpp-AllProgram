#include <iostream>
using namespace std;
int main()
{
    int FirstNumber;
    int SecondNumber;
    int ThirdNumber;
    cout << "Enter the first number : ";
    cin >> FirstNumber;
    cout << "Enter the second number : ";
    cin >> SecondNumber;
    cout << "Enter the third number : ";
    cin >> ThirdNumber;
    if (FirstNumber > SecondNumber)
    {
        if (FirstNumber > ThirdNumber)
        {
            cout << "First Number Grater  : " << FirstNumber;

        }
        else
        {
            cout << "Third Number Grater  : " << ThirdNumber;
        }
    }
    else
    {
        if (SecondNumber > ThirdNumber)
        {
            cout << "Second Number Grater  : " << SecondNumber;
        }
        else
        {
            cout << "Third Number Grater  : " << ThirdNumber;
        }
    }
    return 0;
}