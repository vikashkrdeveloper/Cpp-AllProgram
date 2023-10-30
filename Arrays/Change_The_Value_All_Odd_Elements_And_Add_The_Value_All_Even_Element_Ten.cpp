#include<iostream> 
using namespace std;

int  main(){
int arr[5];
int arraylength=sizeof(arr)/sizeof(int);
for (int i = 0; i <=arraylength-1; i++)
{
    cin>>arr[i];
}
for (int i = 0; i <=arraylength-1; i++)
{
    if (i%2==0)
    {
         arr[i]+=10;
    }else{
        arr[i]=56;
    }
    
    cout<<arr[i]<<" ";
}

return 0;
}