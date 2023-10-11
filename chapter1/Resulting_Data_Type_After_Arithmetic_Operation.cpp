#include <iostream>
using namespace std;
int main()
{
    float a = 5 / 7;
    float b = 5.0 / 7;
    float c = 5 / 7.0;
    float d = 5.0 / 7.0;
    int A = 'a' + 'b';
    int B = '0' + '9';
    int C = 'A' + 'B';
    char _1 = 60 + 5;
    char _2 = 40 + 8;
    char _3 = 90 + 7;
    cout << "Output will be : " << a << endl;  // this line genrate output will be 0
    cout << "Output will be : " << b << endl;  // this line genrate output will be 0.7142..
    cout << "Output will be : " << c << endl;  // this line genrate output will be 0.7142..
    cout << "Output will be : " << d << endl;  // this line genrate output will be 0.7142..
    cout << "Output will be : " << A << endl;  // this line genrate output will be 195..
    cout << "Output will be : " << B << endl;  // this line genrate output will be 105..
    cout << "Output will be : " << C << endl;  // this line genrate output will be 131..
    cout << "Output will be : " << _1 << endl; // this line genrate output will be A..
    cout << "Output will be : " << _2 << endl; // this line genrate output will be 0..
    cout << "Output will be : " << _3 << endl; // this line genrate output will be a..
    return 0;
}