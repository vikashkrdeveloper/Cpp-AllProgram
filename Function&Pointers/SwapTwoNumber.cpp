#include<iostream> 
using namespace std;
void swapTwoNumber (int FirstNumber,int SecondNumber){
int temp=FirstNumber;
FirstNumber=SecondNumber;
SecondNumber=temp;
cout<<"Swapping Number value "<<endl;
cout<<FirstNumber<<endl;
cout<<SecondNumber<<endl;
cout<<endl;

}
int  main(){
int UserInputFirstNumber;
int UserInputSecondNumber;
cout<<"Enter the number : ";
cin>>UserInputFirstNumber;
cout<<"Enter the number : ";
cin>>UserInputSecondNumber;
cout<<"Before Swapping Number value "<<endl;
cout<<UserInputFirstNumber<<endl;
cout<<UserInputSecondNumber<<endl;
cout<<endl;
swapTwoNumber(UserInputFirstNumber,UserInputSecondNumber);
cout<<"After Swapping Number value "<<endl;
cout<<UserInputFirstNumber<<endl;
cout<<UserInputSecondNumber<<endl;
cout<<endl;

return 0;
}