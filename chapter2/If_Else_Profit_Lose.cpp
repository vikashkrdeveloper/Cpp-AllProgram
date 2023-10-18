#include <iostream>
using namespace std;
int main()
{
    int costPrice;
    int SelerPrice;
    int Profit;
    int Lose;
    cout << "Enter the Cost prices : ";
    cin >> costPrice;
    cout << "Enter the Seler Prices : ";
    cin >> SelerPrice;
    if (SelerPrice > costPrice)
    {
        Profit = SelerPrice - costPrice;
        cout << "Profit of the product " << Profit;
    }
    else if (SelerPrice < costPrice)
    {
        Lose = SelerPrice - costPrice;
        cout << "Lose of the product " << Lose;
    }
    else
    {
        Profit = SelerPrice - costPrice;
        cout << "No Profit No Lose  of the product " << Profit;
    }

    return 0;
}