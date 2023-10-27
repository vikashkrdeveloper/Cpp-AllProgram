#include <iostream>
using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    if (UserInputNumber % 5 == 0)
    {
        cout << "This number is " << UserInputNumber << " divisible by five ";
    }else{
        cout << "This number is " << UserInputNumber << " Not  divisible by five ";

    }
    return 0;
}