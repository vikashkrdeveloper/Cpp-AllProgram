#include<iostream> 
using namespace std;
void zigzagfunction(int num){
    if(num==0)return;
    cout<<num;
    zigzagfunction(num-1);
    cout<<num;
    zigzagfunction(num-1);
    cout<<num;
}
int  main(){
int UserInputNumber;
cout<<"Enter the number : ";
cin>>UserInputNumber;
cout<<UserInputNumber<< " : ";
zigzagfunction(UserInputNumber);
return 0;
}