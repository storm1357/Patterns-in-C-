#include <iostream>
using namespace std;

int main ()
{
  // ---Pattern 8---
  //   *  
  //  * * 
  // * * *

  int n;
  cout << "Enter ther number of rows for the pattern:" << endl;
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
          cout <<"* ";
          j++;
        }
      i++;
      cout << endl;
    }
}
