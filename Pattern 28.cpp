#include <iostream>
using namespace std;

int main ()
{
  // ---Pattern 28---
  // 1
  // 23
  // 345
  // 4567

  int n;
  cout << "Enter the number till which the pattern has to be printed:" << endl;
  cin >> n;
  int i=1, a;
  while (i<=n)
    {
      a=i;
      int j=1;
      while (j<=i)
        {
          cout << a << " ";
          a++;
          j++;
        }
      cout << endl;
      i++;
    }
  
  // ----OR----

  //  int n;
  // cout << "Enter the number till which the pattern has to be printed:" << endl;
  // cin >> n;
  // int i=1;
  // while (i<=n)
  //   {
  //     int j=1;
  //     while (j<=i)
  //       {
  //         cout << i+j-1 << " ";
  //         j++;
  //       }
  //     cout << endl;
  //     i++;
  //   }
}
