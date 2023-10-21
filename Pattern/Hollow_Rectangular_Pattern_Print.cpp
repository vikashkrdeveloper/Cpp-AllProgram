#include <iostream>
using namespace std;

int main()
{
    int UsernumberInput;
    cout << "Enter the number : ";
    cin >> UsernumberInput;
    for (int i = 1; i <= UsernumberInput; i++)
    {
        for (int j = 1; j <= UsernumberInput; j++)
        {
            if(i==1||i==UsernumberInput||j==1 or j == UsernumberInput){
            cout << " * ";

            }
            else{
            cout << "   ";

            }
        }
        cout << endl;
    }

    return 0;
}