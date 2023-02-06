#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 22---
  //   *
  //  ***
  // *****

  int n;
  cout << "Enter the number of rows for the pattern:" << endl;
  cin >> n;
  int i=1;
  while(i<=n)
    {
      int sp=n-i;
      while(sp)
        {
          cout << " ";
          sp--;
        }
      int j=1;
      while(j<=2*i-1)
        {
          cout << "*";
          j++;
        }
      cout << endl;
      i++;
    }
}
