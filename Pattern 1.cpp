#include <iostream>
using namespace std;

int main()
{
  //---Pattern 1---
  // ***
  // ***
  // ***
  
  int n;
  cout << "Enter the number for pattern:" << endl;
  cin >> n ;

  int i = 1;
  while(i<=n)
    {
      int j=1;
      while (j<=n)3
        {
          cout << "*";
          j++;
        }
      cout << endl;
      i++;
    }
}
