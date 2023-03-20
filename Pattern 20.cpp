#include <iostream>
using namespace std;

int main ()
{
  // ---Pattern 20---
  //   1
  //  22
  // 333

  int n;
  cout << "Enter the number of row till which the pattern is to be printed:" << endl;
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
          cout << i;
          j++;
        }
      cout << endl;
      i++;
    }
}
