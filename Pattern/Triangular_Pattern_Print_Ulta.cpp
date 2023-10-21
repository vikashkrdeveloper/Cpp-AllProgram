#include <iostream>
using namespace std;

int main()
{
    int UserInputNumberRow;
    cout << "Enter the number Row : ";
    cin >> UserInputNumberRow;
    for (int i = 1; i <=UserInputNumberRow; i++)
    {
        for ( int j = 1; j <= UserInputNumberRow-i+1; j++)
        {
        //    if(j>=i){
                cout << " * ";
        //    }
        }
        cout << endl;
    }

    return 0;
}