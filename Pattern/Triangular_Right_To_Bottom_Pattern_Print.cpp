#include<iostream> 
using namespace std;

int  main(){
int UsernumberInput;
cout<<"Enter the number : ";
cin>>UsernumberInput;
int star=1;
int  spaces=UsernumberInput-1;
for (int i =1; i <=UsernumberInput; i++)
{
    for (int j =1; j<=spaces; j++)
    {
       cout<<"  ";
    }
    for (int j =1; j<=star; j++)
    {
       cout<<char(3)<<" ";
    }
    if(i<UsernumberInput){
        star++;
        spaces--;
    }
    cout<<endl;
}

return 0;
}