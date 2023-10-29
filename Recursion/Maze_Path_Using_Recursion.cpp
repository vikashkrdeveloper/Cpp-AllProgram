#include <iostream>
using namespace std;
int mazePathFunction(int currentRow, int currentcoloum, int EndRow, int Endcoloum)
{
    int rightways=0;
    int downways=0;

    if (currentRow == EndRow && currentcoloum == Endcoloum)
        return 1;
    if (currentRow == EndRow)
        rightways += mazePathFunction(currentRow, currentcoloum +  1, EndRow, Endcoloum);
    if (currentcoloum == Endcoloum)
        downways += mazePathFunction(currentRow + 1, currentcoloum, EndRow, Endcoloum);
    if (currentRow < EndRow && currentcoloum < Endcoloum)
    {
        rightways += mazePathFunction(currentRow, currentcoloum + 1, EndRow, Endcoloum);

        downways += mazePathFunction(currentRow +1, currentcoloum, EndRow, Endcoloum);
    }
    int totalNumberOfWays = rightways + downways;
    return totalNumberOfWays;
}
int main()
{
    int UserInputNumberRow;
    int UserInputNumberColoum;
    cout << "Enter the number Row : ";
    cin >> UserInputNumberRow;
    cout << "Enter the number Coloum : ";
    cin >> UserInputNumberColoum;
    int mazepath = mazePathFunction(1, 1, UserInputNumberRow, UserInputNumberColoum);
    cout << mazepath;
    return 0;
}