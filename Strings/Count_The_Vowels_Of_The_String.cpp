#include <iostream>
using namespace std;
int main()
{
    string UserInputString;
    cout << "Enter the StringUser Input : ";
    getline(cin, UserInputString);
    int length = UserInputString.size();
    int vowelscounts = 0;
    for (int i = 0; i <= length - 1; i++)
    {
        if (UserInputString[i] == 'a' || UserInputString[i] == 'e' || UserInputString[i] == 'i' || UserInputString[i] == 'o' || UserInputString[i] == 'u')
        {
            vowelscounts += 1;
        }
    }
    cout << UserInputString << endl;
    cout << "Total number of vowels is : " << vowelscounts;
    return 0;
}