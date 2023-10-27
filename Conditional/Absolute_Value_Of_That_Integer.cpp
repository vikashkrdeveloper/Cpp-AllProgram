#include<iostream >
using namespace std;
int main (){

    int UserInputNumber;
    cout<<"Enter the number : ";
    cin>>UserInputNumber;
    if(UserInputNumber>0){
        cout<<"Absolute Value is : "<<UserInputNumber;

    }else{
        UserInputNumber=-UserInputNumber;
        cout<<"Absolute Value is : "<<UserInputNumber;
    }
    return 0;
}