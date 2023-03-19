#include <iostream>
using namepsace std;

int main()
{
  // ---Pattern 18---
  // 111
  // 222
  // 333

  int n;
  cout << "Enter the number of rows till which the pattern should be printed:" << endl;
  cin >> n;
  int i = 1;
  while (i<=n)
    {
      int j = 1;
      while (j<=n)
        {
          cout << i;
          j++;
        }
      cout << endl;
      i++;
    }
}
