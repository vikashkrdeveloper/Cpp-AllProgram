#include<iostream> 
using namespace std;

int  main(){

int UserInputNumber;
cout<<"Enter the number : ";
cin>>UserInputNumber;
for (int  i = 1; i <=UserInputNumber; i++)
{
   for (int j = 1; j <=i; j++)
   {
  if((i+j)%2==0){
    cout<<"1"<<" ";
  }else{
    cout<<"0"<<" ";

  }
   }
   cout<<endl;
}

return 0;
}