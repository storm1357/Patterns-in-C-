#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 26---
  // 123
  //  23
  //   3

  int n;
  cout << "Enter the number till which the pattern has to be printed:" << endl;
  cin >> n;
  int i=1;
  while (i<=n)
    {
      int sp=i-1;
      while (sp)
        {
          cout << " ";
          sp--;
        }
      int j=n-i+1;
      int m=i;
      while (j)
        {
          cout << m;
          m++;
          j--;
        }
      cout << endl;
      i++;
    }

}
