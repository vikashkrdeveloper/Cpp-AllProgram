#include<iostream>
using namespace std;
int main(){

        int UserInput;
        cout<<"Enter the number : ";
        cin>>UserInput;
        if(UserInput%3==0 or UserInput%5==0){
            cout<<"Divisible by Five and three ";
        }
        else{
            cout<<" Not Divisible by Five and three ";

        }


    return 0;
}