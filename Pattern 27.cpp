#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 27---
  // 1234
  // 123
  // 12
  // 1

  int n;
  cout << "Enter the number till Which the pattern has to be printed:" << endl;
  cin >> n;
  int i = 1;
  int o;
  o=n;
  while(i<=o)
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
