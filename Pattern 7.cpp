#include <iopstream>
using namespace std;

int main()
{
  // ---Pattern 7---
  // *****
  //  *** 
  //   *

  int n;
  cout << "Enter the number rows for the pattern:" << endl;
  cin >> n;
  int i=1, m=n;
  while (i<=n)
    {
      int sp=i-1;
      while (sp)
        {
          cout << " ";
          sp--;
        }
      int j=2*m-1;
      while (j)
        {
          cout << "*";
          j--;
        }
      m--;
      i++;
      cout << endl;
    }
}
