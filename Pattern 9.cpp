#include <iostream>
using namespace std;

int main ()
{
  // ---Pattern 9---
  // * * *
  //  * *
  //   *

  int n;
  cout << "Enter the number of rows for the pattern:" << endl;
  cin >> n;
  int i=1, m=n;
  while (i<=n)
    {
      int sp=i-1;
      while (sp)
        {
          cout << " ";
          sp--;
        }
      int j=1;
      while (j<=m)
        {
          cout << "* ";
          j++;
        }
      i++;
      m--;
      cout << endl;
    }
}
