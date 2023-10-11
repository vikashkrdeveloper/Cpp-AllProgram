#include <iostream>
using namespace std;

int main()
{
    float CompoundInterest, principleAmount, Interestrate;
    int Timeinyear;
    cout << "Enter the PrincipleAmount" << endl;
    cin >> principleAmount;
    cout << endl;
    cout << "Enter the Interestrate" << endl;
    cin >> Interestrate;
    cout << endl;
    cout << "Enter the Timeinyear" << endl;
    cin >> Timeinyear;
    cout << endl;
    CompoundInterest=((principleAmount*(1+(Interestrate/Timeinyear))*Timeinyear*Timeinyear));
    cout << CompoundInterest;
    return 0;
}