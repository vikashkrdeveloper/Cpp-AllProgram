#include<iostream>

using namespace std;
int main(){
    int UserNumberInput;
    cout<<"Enter the number : ";
    cin>>UserNumberInput;
    int factor=1;
    for(int i=1; i<=UserNumberInput/2; i++){
        if (UserNumberInput%i==0)
        {
            factor=i;
        }
        
    }
       cout<<factor<<" ";

    return 0;
}
