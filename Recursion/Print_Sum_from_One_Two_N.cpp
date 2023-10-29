
#include <iostream>
using namespace std;
void RecursionUsingSumOneToNNumber(int Usernumber, int sum)
{
    if (Usernumber == 0)
    {
        cout << sum;
        return;
    }
    RecursionUsingSumOneToNNumber(Usernumber - 1, sum + Usernumber);
}

int main()
{
    int UserNumberInput;
    cout << "Enter the number : ";
    cin >> UserNumberInput;
    RecursionUsingSumOneToNNumber(UserNumberInput, 0);
    return 0;
}