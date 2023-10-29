#include<iostream> 
using namespace std;
void towerOfhanoi(int UserInputNumber,char source, char helper,char destination){
    if(UserInputNumber==0) return;
    towerOfhanoi(UserInputNumber-1,source,destination,helper);
    cout<<source<<" --> "<<destination<<endl;
    towerOfhanoi(UserInputNumber-1,helper,source,destination);

}

int  main(){
int UserInputNumber;
cout<<"Enter the number of disks : ";
cin>>UserInputNumber;
towerOfhanoi(UserInputNumber,'A','B','C');
return 0;
}