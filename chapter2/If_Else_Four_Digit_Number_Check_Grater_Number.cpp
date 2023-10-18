#include <iostream>
using namespace std;
int main()
{
    int FirstNumber;
    int SecondNumber;
    int ThirdNumber;
    int FourNumber;
    cout << "Enter the first number : ";
    cin >> FirstNumber;
    cout << "Enter the second number : ";
    cin >> SecondNumber;
    cout << "Enter the third number : ";
    cin >> ThirdNumber;
    cout << "Enter the Four number : ";
    cin >> FourNumber;
    if (FirstNumber > SecondNumber && FirstNumber > ThirdNumber and FirstNumber>FourNumber)
    {
        cout << "First Number Grater  : " << FirstNumber;
    }
    else if (SecondNumber > FirstNumber and SecondNumber > ThirdNumber and SecondNumber>FourNumber)
    {
        cout << "Second Number is Grater  : " << SecondNumber;
    }
    else if (ThirdNumber > SecondNumber &&ThirdNumber>FourNumber)
    {
        cout << "Third Number is  Grater : " << ThirdNumber;
    }
    else if (FourNumber >ThirdNumber)
    {
        cout << "Four Number is  Grater : " << FourNumber;
    }
 
    return 0;
}