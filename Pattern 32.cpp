#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 32---
  //    1
  //   23
  //  456
  // 78910

  int n;
  cout << "Enter the number of row till which the pattern has to be printed:" << endl;
  cin >> n;
  int i=1, m=1;
  while (i<=n)
    {
      int sp=n-i;
      while (sp)
        {
          cout << " ";
          sp--;
        }
      int j=1;
      while(j<=i)
        {
          cout << m;
          m++;
          j++;
        }
      cout << endl;
      i++;
    }
}
