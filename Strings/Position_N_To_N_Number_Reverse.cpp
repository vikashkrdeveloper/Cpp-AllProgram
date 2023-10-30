// #include <iostream>
// using namespace std;

// int main()
// {
//     string UserInputString;
//     cout << "Enter the StringUser Input : ";
//     getline(cin, UserInputString);
//     int num = UserInputString.length() - 1;
//     int UserInputpositionstart;
//     int UserInputpositionlast;
//     cout << "Enter the UserInputpositionstart : ";
//     cin >> UserInputpositionstart;
//     cout << "Enter the UserInputpositionlast : ";
//     cin >> UserInputpositionlast;
//     for (int i = 0; i <= num; i++)
//     {
//         char temp = UserInputString[i];
//         UserInputString[UserInputpositionstart] = UserInputString[UserInputpositionlast - 1];
//         UserInputString[UserInputpositionlast - 1] = temp;
//         UserInputpositionlast--;
//         UserInputpositionstart++;
//     }
//     cout << UserInputString << endl;
//     return 0;
// }