#include<iostream> 
using namespace std;

int  main(){
int UserInputNumber;
cout<<"Enter the number : ";
cin>>UserInputNumber;
int a=1;
for (int i = 1; i <=UserInputNumber; i++)
{
  for (int j= 1; j <=i; j++)
  {
    cout<<a<<" ";
    a++;
  }
  cout<<endl;
  
}


return 0;
}   