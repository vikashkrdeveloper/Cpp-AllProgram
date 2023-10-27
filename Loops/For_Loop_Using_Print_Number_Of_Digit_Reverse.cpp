#include <iostream >

using namespace std;
int main()
{
    int UserInput;
    int lastdigit;
    int rev=0;
    cout << "Enter the number : ";
    cin >> UserInput;    
    while (UserInput!=0)
    {
        lastdigit=UserInput%10;
        UserInput/=10;
        rev=rev*10+lastdigit;

    }
    cout<<rev;
    

    return 0;
}