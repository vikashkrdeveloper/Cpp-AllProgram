#include<iostream>

using namespace std;
int main(){
    int UserInputNumberRow;
    char alphabat = 'A';
    cout << "Enter the number Row : ";
    cin >> UserInputNumberRow;
    for (int i = 1; i <=UserInputNumberRow; i++)
    {
        for (int j = 1; j <=UserInputNumberRow-i+1; j++)
        {
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
        
    }
    

return 0;
}