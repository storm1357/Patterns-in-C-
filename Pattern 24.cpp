#include <iostream>
using namespace std;

int main ()
{
  // --- Pattern 6---
  // 1
  // 12
  // 123
  // 1234

  int n;
  cout << "Enter the number till which the square has to be printed:" << endl;
  cin >> n;
  int i = 1;
  while (i<=n)
    {
      int j = 1;
      while (j<=i)
        {
          cout << j;
          j++;
        }
      cout << endl;
      i++;
    }
}
