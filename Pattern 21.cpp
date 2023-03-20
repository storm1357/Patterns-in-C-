#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 21---
  // 1111
  // 222
  // 33
  // 4

  int n;
  cout << "Enter the number till which the pattern has to be printed:" << endl;
  cin >> n;
  int o;
  o=n;
  int i=1;
  while (i<=o)
    {
      int j=1;
      while (j<=n)
        {
          cout << j;
          j++;
        }
      cout << endl;
      i++;
      n--;
    }
}
