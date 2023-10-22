#include <iostream>

using namespace std;
int main()
{
    int UserInputNumber;
    cout << "Enter the number : ";
    cin >> UserInputNumber;
    int min = 0;
    for (int i = 1; i <= 2 * UserInputNumber - 1; i++)
    {
        for (int j = 1; j <= 2 * UserInputNumber - 1; j++)
        {
            int a = i;
            int b = j;
            if(i>UserInputNumber)a=2*UserInputNumber-i;
            if(j>UserInputNumber)b=2*UserInputNumber-j;
            if (a > b)
                min = b;
            else
                min = a;
            cout << UserInputNumber+1-min << "  ";
        }
        cout << endl;
    }

    return 0;
}