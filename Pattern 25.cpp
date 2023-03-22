#include <iostream>
using namespace std;

int main ()
{
  // ---Pattern 25---
  //   3
  //  23
  // 123

  int n;
  cout << "Enter the number till which the pattern has to be printed:" << endl;
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
      int m=n-i+1;
      int j=1;
      while (j<=i)
        {
          cout << m;
          j++;
          m++;
        }
      cout << endl;
      i++;
    }
}
