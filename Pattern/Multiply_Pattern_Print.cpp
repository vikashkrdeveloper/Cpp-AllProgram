#include<iostream> 
using namespace std;

int  main(){

int UserinputNumber;
cout<<"Enter the number : ";
cin>>UserinputNumber;
for (int i =1; i <=UserinputNumber; i++)
{
   for (int j = 1; j <=UserinputNumber; j++)
   {
    if(i==j||(i+j)==UserinputNumber+1){
    cout<<" * ";

    }else{
    cout<<"   ";

    }

   }
   cout<<endl;
}

return 0;
}