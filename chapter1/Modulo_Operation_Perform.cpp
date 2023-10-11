#include <iostream>
using namespace std;
int main()
{

    int A = 5 % 2;
    int B = 2 % 5;
    float C = 2 % 5;
    float D = 2 % -5;
    float E = -2 % 5;
    cout << "Output will be : " << A << endl; // this line genrate output will be 1
    cout << "Output will be : " << B << endl; // this line genrate output will be 2
    cout << "Output will be : " << C << endl; // this line genrate output will be 2
    cout << "Output will be : " << D << endl; // this line genrate output will be 2
    cout << "Output will be : " << E << endl; // this line genrate output will be -2
    return 0;
}
