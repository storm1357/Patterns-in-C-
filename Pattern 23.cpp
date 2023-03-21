#include <iostream>
using namesapce std;

int main ()
{
  // ---Pattern 23---
  // 12345
  // 12345
  // 12345
  // 12345
  // 12345

  int n;
  cout << "Enter the number till which the square has to be printed:" << endl;
  cin >> n;
  int i = 1;
  while (i<=n)
    {
      int j = 1;
      while (j<=n)
        {
          cout << j;
          j++;
        }
      cout << endl;
      i++;
    }
}
