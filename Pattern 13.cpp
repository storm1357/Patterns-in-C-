#include <iostream>
using anmespace std;

int main()
{
  // ---Pattern 13---
  // ********
  // ***  ***
  // **    **
  // *      *

  int n;
  cout << "Enter the number of rows for the pattern:" << endl;
  cin >> n;
  int i=1, m=n;
  while (i<=n)
    {
      int j=m;
      while (j)
        {
          cout << "*";
          j--;
        }
      int sp=i*2-2;
      while (sp)
        {
          cout << " ";
          sp--;
        }
      int k=m;
      while (k)
        {
          cout << "*";
          k--;
        }
      i++;
      m--;
      cout << endl;
  }
}
