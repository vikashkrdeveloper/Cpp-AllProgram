#include<iostream>

using namespace std;
int main(){
    int UserInputNumber;
    cout<<"Enter the Number : ";
    cin>>UserInputNumber;
    int i=0;
    while (UserInputNumber!=0)
    { 
        UserInputNumber/=10;
        i++;
    }
    cout<<"Total number of digit is equal to : "<<i;
    
    
    return 0;
}