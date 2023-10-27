#include<iostream> 
using namespace std;

int  main(){
char UsingNumberInput;
cout<<"Enter the number : ";
cin>>UsingNumberInput;
for (int i =1; i <=26; i++)
{
    int ascll=UsingNumberInput++;
    cout<<ascll <<" = "<<char(ascll)<<endl;
}


return 0;
}