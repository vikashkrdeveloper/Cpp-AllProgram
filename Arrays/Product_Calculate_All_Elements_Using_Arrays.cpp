#include<iostream> 
using namespace std;

int  main(){
 int UserInputNumberArraySize;
    cout << "Enter the number Arrays Size : ";
    cin >> UserInputNumberArraySize;
    int arr[UserInputNumberArraySize];
    int sum = 1;
    for (int i = 0; i <= sizeof(arr)/sizeof(int); i++)
    {
        cout << "Enter the number arrays elemens " << i<< " : ";
        cin >> arr[i];
    }
    for (int i = 0; i <= sizeof(arr)/sizeof(int); i++)
    {
        sum *= arr[i];
    }
    cout << "Sum of all arrays element is equal to : " << sum;

return 0;
}