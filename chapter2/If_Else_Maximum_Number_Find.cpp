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
    if (FirstNumber > SecondNumber and SecondNumber > ThirdNumber)
    {
        cout << "First Number Grater  : " << FirstNumber;
    }
    else if (SecondNumber > FirstNumber and ThirdNumber < SecondNumber)
    {
        cout << "Second Number is Grater  : " << SecondNumber;
    }
    else if (ThirdNumber > FirstNumber and FirstNumber < SecondNumber)
    {
        cout << "Third Number is  Grater : " << ThirdNumber;
    }
    else if(FirstNumber==SecondNumber){
        cout<<"First Number and Second number are equal ";

    }
    else if(ThirdNumber==SecondNumber){
        cout<<"Third Number and Second number are equal ";

    }
    else if(ThirdNumber==FirstNumber){
        cout<<"Third Number and First number are equal ";

    }
    else
    {
        cout<<"All Number are equal ";
    }
    return 0;
}