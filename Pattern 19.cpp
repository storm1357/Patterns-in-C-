#include <iostream>
using namespace std;

int main ()
{
  // ---Pattern 19---
  // 1
  // 22
  // 333
  // 4444

  int n;
  cout << "Enter the number of rows till which the pattern should be printed:" << endl;
  cin >> n;
  int i = 1;
  while (i<=n)
    {
      int j = 1;
      while (j<=i)
        {
          cout << i;
          j++;
        }
      cout << endl;
      i++;
    }
}
