#include <iostream>
using namespace std;

int main()
{

    int Userinput;
    int sum = 0;
    int lastnumber;
    cout << "Enter the number : ";
    cin >> Userinput;
    while (Userinput != 0)
    {
        lastnumber=Userinput%10;
        Userinput/=10;
        if(lastnumber%2==0){
            sum+=lastnumber;
        }
    }
    cout<<sum;

    return 0;
}