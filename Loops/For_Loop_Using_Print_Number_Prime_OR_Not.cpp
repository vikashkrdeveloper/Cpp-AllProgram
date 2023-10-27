#include <iostream>

using namespace std;
int main()
{
    int NumberUserInput;
    cout << "Enter the number : ";
    cin >> NumberUserInput;
    int PrimeNumber = true;
    for (int i = 2; i <= NumberUserInput / 2; i++)
    {
        if (NumberUserInput % i == 0)
        {
            PrimeNumber = false;
            break;
        }
    }
    if(NumberUserInput==1){
        cout << " It's  Prime Number or Composite number : " << NumberUserInput;

    }else if (PrimeNumber)
    {
        cout << " It's Prime Number : " << NumberUserInput;
    }
    else
    {
        cout << " It's Not a  Prime Number : " << NumberUserInput;
    }

    return 0;
}
