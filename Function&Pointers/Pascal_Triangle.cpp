#include <iostream>
using namespace std;

int calculatefactorial(int Input)
{
  int fact = 1;
  for (int i = 1; i <= Input; i++)
  {
    fact *= i;
  }
  return fact;
}

int pascalTriangle(int UserInputNumber)
{

  for (int i = 0; i < UserInputNumber; i++)
  {
    for (int j = 0; j <=UserInputNumber-i-1; j++)
    {
      
      cout<<"  ";
    }
    for (int j = 0; j <= i; j++)
    {
      int NumberOfN = calculatefactorial(i);
      int NumberOfR = calculatefactorial(j);
      int NumberOfNNegativeR = calculatefactorial(i- j);
      int CalculateNce = NumberOfN / (NumberOfR * NumberOfNNegativeR);
      cout<<CalculateNce<<"   ";
    }

    cout << endl;
  }
}

int main()
{
  int UserInputNumber;
  cout << "Enter the number : ";
  cin >> UserInputNumber;
  pascalTriangle(UserInputNumber);
  return 0;
}