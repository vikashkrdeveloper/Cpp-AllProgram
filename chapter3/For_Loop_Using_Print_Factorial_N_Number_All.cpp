#include <iostream>
using namespace std;

int main()
{
     int UserInputNumber;
     int fact = 1;
     cout << "Enter the Number : ";
     cin >> UserInputNumber;
     for (int i = 1; i <= UserInputNumber; i++)
     {

          fact *= i;
          cout << fact<<endl;
     }

     return 0;
}