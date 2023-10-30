#include<iostream> 
using namespace std;

int  main(){
int UserNumberInput;
cout<<"Enter the number : ";
cin>>UserNumberInput;
int arr[UserNumberInput];
int a=1;
for (int  i = 0; i <=UserNumberInput-1; i++)
{
    arr[i]=a*a;
    a++;
}
for (int  i = 0; i <=UserNumberInput-1; i++)
{
   cout<<arr[i]<<" ";
}

return 0;
}