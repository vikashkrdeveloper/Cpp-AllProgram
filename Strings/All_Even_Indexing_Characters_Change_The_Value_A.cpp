#include <iostream>
using namespace std;
int main()
{
    string UserInputString;
    cout << "Enter the StringUser Input : ";
    getline(cin, UserInputString);
    int length = UserInputString.size();
    for (int i = 0; i <= length - 1; i++)
    {
        if (i % 2 == 0)
        {
            UserInputString[i] = 'a';
        }
    }
    cout << UserInputString << endl;
    return 0;
}