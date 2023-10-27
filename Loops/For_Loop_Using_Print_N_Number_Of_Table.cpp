#include<iostream>

using namespace std;
int main(){
    int UserInputNumber;
    cout<<"Enter the User number Print the table : ";
    cin>>UserInputNumber;
    for (int i = 1; i <=10; i++)
    {
     cout<<UserInputNumber<<" X "<<i<<" = "<<UserInputNumber*i<<endl;
    }
    
    return 0;
}