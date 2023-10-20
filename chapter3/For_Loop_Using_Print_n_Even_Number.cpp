#include<iostream>

using namespace std;
int main(){
    int UserInputNumber;
    cout<<"Enter the User number : ";
    cin>>UserInputNumber;
    for (int i = 1; i <=UserInputNumber; i++)
    {
       i%2==0?cout<<" Even Number : "<<i:cout<<endl;
    }
    
    return 0;
}