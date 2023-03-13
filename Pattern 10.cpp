#include <iostream>
using namesapce std;

int main ()
{
  // ---Pattern 10---
  // *
  // **
  // ***
  // **
  // *

  int n;
  cout << "Enter the number of columns for the pattern:" << endl;
  cin >> n;
  int i=1;
  while (i<=n)
    {
      int j=1;
      while(j<=i)
        {
          cout <<"*";
          j++;
        }
      i++;
      cout << endl;
    }
  int k=1;
  while(k<=n-1)
    {
      int l=n-k;
      while(l)
        {
          cout << "*";
          l--;
        }
      cout << endl;
      k++;
    }  
}
