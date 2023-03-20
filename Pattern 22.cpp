#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 22---
  // 111
  //  22
  //   3

  int n;
  cout << "Enter the number of rows till which pattern is to be printed:" << endl;
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
      while (j)
        {
          cout << i;
          j--;
        }
      cout << endl;
      i++;
    }
}
