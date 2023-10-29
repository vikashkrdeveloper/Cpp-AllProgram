#include <iostream>
using namespace std;
int mazefunction(int row, int coloum)
{
    int rightways = 0;
    int downways = 0;
    if(row==1&&coloum==1) return 1;
    if(row==1) rightways+=mazefunction(row,coloum-1); 
    if(coloum==1) downways+=mazefunction(row-1,coloum); 
    if(row>1&&coloum>1){
        rightways+=mazefunction(row,coloum-1); 
        downways+=mazefunction(row-1,coloum); 
    }
    int totalnoofWays = rightways + downways;
    return totalnoofWays;
}
int main()
{
    int UserInputRow;
    int UserInputColoum;
    cout << "Enter the number : ";
    cin >> UserInputRow;
    cout << "Enter the number : ";
    cin >> UserInputColoum;
    int maze = mazefunction(UserInputRow, UserInputColoum);
    cout << maze;
    return 0;
}