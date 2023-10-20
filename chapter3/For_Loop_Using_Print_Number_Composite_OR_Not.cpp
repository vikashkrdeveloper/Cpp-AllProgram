#include <iostream>

using namespace std;
int main()
{
    int NumberUserInput;
    cout << "Enter the number : ";
    cin >> NumberUserInput;
    for (int i = 2; i <= NumberUserInput / 2; i++)
    {
        if (NumberUserInput % i == 0)
        {
            cout << "It's Composite Number : "<<NumberUserInput;
            break;
        }else{
            cout << "It's Not  Composite Number : "<<NumberUserInput;
            break;  
        }
        
    }

    return 0;
}