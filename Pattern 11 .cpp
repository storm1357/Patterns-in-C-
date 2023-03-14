#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 11---
  //   *
  //  **
  // ***
  //  **
  //   *

  int n;
  cout << "Enter the number of columns for the pattern:" << endl;
  cin >> n;
  int m=n, o=n;
  int i=1;
  while(i<=n)
    {
      int s=m-1;
      while (s)
        {
          cout << " ";
          s--;
        }
      int j=1;
      while(j<=i)
        {
          cout << "*";
          j++;
        }
      i++;
      m--;
      cout << endl;
    }
  int in=1;
  while(in<=n-1)
    {
      int sp=1;
      while(sp<=in)
        {
          cout << " ";
          sp++;
        }
      int jk=o-1;
      while (jk)
        {
          cout << "*";
          jk--;
        }
      in++;
      o--;
      cout << endl;
  }
}
