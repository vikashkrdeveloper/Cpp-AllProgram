#include <iostream>

using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    for (int i = 0; i <3; i++)
    {
       for (int j = 0; j < UserInputNumber; j++)
       {
        char ch= 3;
         cout<<ch<<" ";
       }
       cout<<endl;
       
    }
    

    return 0;
}