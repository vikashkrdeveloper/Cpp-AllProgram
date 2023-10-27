#include<iostream> 
using namespace std;

int  main(){

int UserInputNumber;
int sum=0;
cout<<"Enter the Number : ";
cin>>UserInputNumber;
for (int  i = 1; i <=UserInputNumber; i++)
{
  sum+=i;
}
cout<<sum;
return 0;
}