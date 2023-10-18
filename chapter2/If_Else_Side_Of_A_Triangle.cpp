#include <iostream>
using namespace std;
int main()
{
    int base;
    int gama;
    int area;
    cout << "Enter the number base : ";
    cin >> base;
    cout << "Enter the number gama : ";
    cin >> gama;
    cout << "Enter the number area : ";
    cin >> area;
    if ((base + gama) > area and (base + area) > gama and (gama + area) > base)
    {
        cout << "Valid triangle";
    }
    else
    {
        cout << "Invalid triangle";
    }

    return 0;
}