#include<iostream> 
using namespace std;
int StairPathFunction(int UserNumberInput){
if (UserNumberInput<=3)return UserNumberInput;
 return StairPathFunction(UserNumberInput-1)+StairPathFunction(UserNumberInput-2)+StairPathFunction(UserNumberInput-3);

}
int  main(){
int UserNumberInput;
cout<<"Enter the number : ";
cin>>UserNumberInput;
int stairPath=StairPathFunction(UserNumberInput);
cout<<stairPath;
return 0;
}