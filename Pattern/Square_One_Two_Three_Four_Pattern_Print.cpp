#include <iostream>

using namespace std;
int main()
{
    int UserInputNumberRow;
    int UserInputNumberColum;
    cout << "Enter the number Of Row : ";
    cin >> UserInputNumberRow;
    cout << "Enter the number Of Second : ";
    cin >> UserInputNumberColum;
    for (int i = 1; i <= UserInputNumberRow; i++)
    {
        for (int j = 1; j <=UserInputNumberColum; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}