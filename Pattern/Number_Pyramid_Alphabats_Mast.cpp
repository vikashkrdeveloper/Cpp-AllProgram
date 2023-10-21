#include<iostream> 
using namespace std;

int  main(){
int UserNumberInput;
cout<<"Enter the number : ";
cin>>UserNumberInput;
int spaces=1;
int star=UserNumberInput;
for (int i = 1; i <=2*UserNumberInput+1; i++)
{
   cout<<" "<<char('A'+i-1)<<" "; 
}
cout<<endl;

for (int i =1; i <=UserNumberInput; i++)
{
    int a=1;
    for (int j = 1; j <=star; j++)
    {
        cout<<" "<<char('A'+a-1)<<" "; 
         a++;
    }
    for (int j = 1; j <=spaces; j++)
    {
         cout<<"   ";
         a++;

    }
    for (int j = 1; j <=star; j++)
    {
        cout<<" "<<char('A'+a-1)<<" "; 
         a++;
    }
    spaces+=2;
    star--;
    
    cout<<endl;
}

return 0;
}