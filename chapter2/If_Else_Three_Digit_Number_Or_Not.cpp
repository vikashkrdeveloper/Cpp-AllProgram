#include <iostream>

using namespace std;
int main()
{
    int UserInputNumber;
    cout<<"Enter the number ";
    cin>>UserInputNumber;
    if(UserInputNumber>99 and UserInputNumber<1000){
        cout<<"This number is Three digit :  "<<UserInputNumber;
    }else{
        cout<<"This number is not  Three digit : "<<UserInputNumber;
        
    }

    return 0;
}