#include<iostream> 
using namespace std;
void PreInPost(int num){
    if(num==0) return; 
    cout<<" Pre Number : "<<num<<endl;
    PreInPost(num-1);
    cout<<" In Number : "<<num<<endl;
    PreInPost(num-1);
    cout<<" Post Number : "<<num<<endl;

}
int  main(){
int UserInputNumber;
cout<<"Enter the number : ";
cin>>UserInputNumber;
PreInPost(UserInputNumber);
return 0;
}