#include <iostream>
using namespace std;

int main()
{
    string UserInputString;
    cout << "Enter the StringUser Input EvenLength  : ";
    getline(cin, UserInputString);
    int length = UserInputString.size();
    int num =( (UserInputString.length()) / 2)-1;
    for (int i = 0; i <= num; i++)
    {

        char temp = UserInputString[i];
        UserInputString[i] = UserInputString[num];
        UserInputString[num] = temp;
        num--;
    }
    cout << UserInputString << endl;
    return 0;
}