#include<iostream> 
using namespace std;
int powerfunction(int UserNumberInput,int Power){
if(Power==0)return 1;
int x=powerfunction(UserNumberInput,(Power/2));
if(Power%2==0)return x*x;
else return x*x*UserNumberInput;
}

int  main(){
int UserNumberInputFirst;
int UserNumberInputSecond;
cout<<"Enter the number First : ";
cin>>UserNumberInputFirst;
cout<<"Enter the number Second : ";
cin>>UserNumberInputSecond;
int power=powerfunction(UserNumberInputFirst,UserNumberInputSecond);
cout<<power;
return 0;
}