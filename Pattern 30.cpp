#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 30---
  // 3
  // 32
  // 321

  int n;
  cout << "Enter the number till which the pattern has to be printed:" << endl;
  cin >> n;
  int i=1;
  while (i<=n)
    {
      int m=n;
      int j=1;
      while (j<=i)
        {
          cout << m;
          m--;
          j++;
        }
      cout << endl;
      i++;
    }
}
