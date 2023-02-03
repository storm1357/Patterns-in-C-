#include <iostream>
using namespace std;

int main ()
{
  //---Pattern 3---
  //    *
  //   **
  //  ***
  // **** 
  
  int n;
  cout << "Enter the value till which the pattern has to be printed:" << endl;
  cin >> n;
  int i=1;
  while (i<=n)
    {
      int sp=n-i;
      while (sp)
        {
          cout << " ";
          sp--;
        }
      int j=1;
      while (j<=i)
        {
          cout << "*";
          j++;
        }
      i++;
      cout << endl;
    }
}
