#include<iostream> 
using namespace std;
int sumfunction(int UsernumberInput){
    if(UsernumberInput==0)return 0;
    return UsernumberInput+sumfunction(UsernumberInput-1);
}
int  main(){
int UserNumberInput;
cout<<"Enter the number : ";
cin>>UserNumberInput;
int sum=sumfunction(UserNumberInput);
cout<<sum;
return 0;
}