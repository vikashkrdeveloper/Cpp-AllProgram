#include <iostream>
using namespace std;
int main()
{
    float radius, Volume_Of_The_Circle;
    cout << "Enter the Radius : " << endl;
    cin >> radius;
    Volume_Of_The_Circle = ((4 / 3) * 3.14 * radius * radius * radius);
    cout << "Volume_Of_The_Circle : " << Volume_Of_The_Circle;

    return 0;
}