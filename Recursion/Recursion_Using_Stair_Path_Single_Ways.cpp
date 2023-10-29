#include<iostream> 
using namespace std;
int StairPathFunction(int UserNumberInput){
if (UserNumberInput<=2)return UserNumberInput;
 return StairPathFunction(UserNumberInput-1)+StairPathFunction(UserNumberInput-2);

}
int  main(){
int UserNumberInput;
cout<<"Enter the number : ";
cin>>UserNumberInput;
int stairPath=StairPathFunction(UserNumberInput);
cout<<stairPath;
return 0;
}