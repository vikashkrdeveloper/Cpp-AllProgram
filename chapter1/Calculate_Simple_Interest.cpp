#include <iostream>
using namespace std;
int main()
{
    float principleamount, interestrate, SimpleInterest;
    int timeinyear;
    cout << "Enter the PrincipleAmount " << endl;
    cin >> principleamount;
    cout << endl;
    cout << "Enter the Interestrate % " << endl;
    cin >> interestrate;
    cout << endl;
    cout << "Enter the Timeinyear " << endl;
    cin >> timeinyear;
    cout << endl;
    SimpleInterest = ((principleamount * interestrate * timeinyear) / 100);
    cout <<"SimpleInterest : = "<<SimpleInterest;

    return 0;
}