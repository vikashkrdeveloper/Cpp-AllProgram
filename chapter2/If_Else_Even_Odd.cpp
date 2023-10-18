#include <iostream>
using namespace std;
int main()
{
    int UserInput;
    cout<<"Enter the number : " ;
    cin>>UserInput;

    if(UserInput%2==0){
        cout<<"Your enter number are even number " <<UserInput;
    }else{
        cout<<"Your enter number are odd number " <<UserInput;
    }

    return 0;
}