#include <iostream>
using namespace std;
int main()
{
    int RectangleLength;
    int RectangleWidth;
    int AreaOfRectaingle;
    int AreaOfAPeriMeter;
    cout << " Enter the RectangleLength : ";
    cin >> RectangleLength;
    cout << " Enter the RectangleWidth : ";
    cin >> RectangleWidth;
    AreaOfRectaingle = RectangleLength * RectangleWidth;
    AreaOfAPeriMeter = 2 * (RectangleLength + RectangleLength);
    if (AreaOfAPeriMeter > AreaOfRectaingle)
    {
        cout << "Area of a Perimeter are grater than Area of Rectangle ";
    }
    else if (AreaOfAPeriMeter < AreaOfRectaingle)
    {
        cout << " Area of a Perimeter are Less than Area of Rectangle ";
    }
    else
    {
        cout << "Area of a Perimeter are equal to the Area of Rectangle ";
    }

    return 0;
}