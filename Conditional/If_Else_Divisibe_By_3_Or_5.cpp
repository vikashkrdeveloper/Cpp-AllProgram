#include <iostream>
using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    if (UserInputNumber % 15 == 0)
    {
        cout << "This number is " << UserInputNumber << " divisible by five and three ";
    }
    else if(UserInputNumber%3==0){
        cout << "This number is " << UserInputNumber << " divisible by three ";

    }
    else if(UserInputNumber%5==0){
        cout << "This number is " << UserInputNumber << " divisible by five ";

    }
    else
    {
        cout << "This number is " << UserInputNumber << " Not  divisible by five and three ";
    }
    return 0;

    return 0;
}