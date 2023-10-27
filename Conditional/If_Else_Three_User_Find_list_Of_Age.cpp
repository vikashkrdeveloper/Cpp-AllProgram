#include <iostream>
using namespace std;
int main()
{
    int FirstUserAge;
    int SecondUserAge;
    int ThirdUserAge;
    cout << "Enter the FirstUser Age : ";
    cin >> FirstUserAge;
    cout << "Enter the SecondUser Age : ";
    cin >> SecondUserAge;
    cout << "Enter the ThirdUser Age : ";
    cin >> ThirdUserAge;
    if (FirstUserAge > SecondUserAge)
    {
        if (FirstUserAge > ThirdUserAge)
        {
            cout << "First User Is youngest age is : " << FirstUserAge;
        }
        else
        {
            cout << "Third User Is youngest age is : " << ThirdUserAge;
        }
    }
    else
    {
        if (SecondUserAge > ThirdUserAge)
        {
            cout << "Second User Is youngest age is : " << SecondUserAge;
        }
        else
        {
            cout << "Third User Is youngest age is : " << ThirdUserAge;
        }
    }

    return 0;
}