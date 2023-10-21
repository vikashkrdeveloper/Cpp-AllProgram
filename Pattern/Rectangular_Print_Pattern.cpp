#include <iostream>
using namespace std;

int main()
{
    int num = 6;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= num; j++)
        {
          if (i==1||i==4||j==1||j==6)
          {
            char ch=3;
            cout<<ch<<" ";
          }else{
            cout<<"  ";

          }
          
        }

        cout << endl;
    }

    return 0;
}