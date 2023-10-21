#include<iostream> 
using namespace std;

int  main(){

int UserInputNumberFirst;
int UserInputNumberSecond;
char alphabat='a';
cout<<"Enter the number First : ";
cin>>UserInputNumberFirst;
cout<<"Enter the number Second : ";
cin>>UserInputNumberSecond;

for (int  i = 1; i <=UserInputNumberFirst; i++)
{
    
    for (int  j = 1; j <=UserInputNumberSecond; j++)
    {
        cout<<char(alphabat+j-1)<<" ";
    }
    cout<<endl;
}

return 0;
}