#include <iostream>
using namespace std;
int main()
{

    int first = 20;
    const int second = 40;
    first = 50;
    // second = 100; //this link will b e throw an error because second is constant constant not change
    cout << first << endl;
    cout << second << endl;

    return 0;
}