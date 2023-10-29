#include<iostream> 
using namespace std;
int fabonaccifunction(int UserInputNumber){
if(UserInputNumber==0||UserInputNumber==1||UserInputNumber==2)return 1;
return fabonaccifunction(UserInputNumber-1)+fabonaccifunction(UserInputNumber-2);
}
int  main(){
int UserNumberInput;
cout<<"Enter the number : ";
cin>>UserNumberInput;
int fabonacci=fabonaccifunction(UserNumberInput);
cout<<fabonacci;
return 0;
}