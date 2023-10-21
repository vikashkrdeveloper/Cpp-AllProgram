#include<iostream>

using namespace std;
int main(){
    int UserInputNumberRow;
    int UserInputNumberColum;
    char alphabat = 'A';
    cout << "Enter the number Row : ";
    cin >> UserInputNumberRow;
    cout << "Enter the number Colum : ";
    cin >> UserInputNumberColum;
    for (int i = 1; i <=UserInputNumberRow; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<char('A'+j-1)<<" ";
        }
        cout<<endl;
        
    }
    

return 0;
}