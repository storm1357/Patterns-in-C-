#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 16---
  // *****
  //  ***
  //   *
  //   *
  //  ***
  // *****

  int n;
  cout << "Enter the number rows for the pattern:" << endl;
  cin >> n;
  int i=1, m=n;
  while (i<=n)
    {
      int s=i-1;
      while (s)
        {
          cout << " ";
          s--;
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
  int ij=1;
  while(ij<=n)
    {
      int sp=n-ij;
      while(sp)
        {
          cout << " ";
          sp--;
        }
      int ji=1;
      while(ji<=2*ij-1)
        {
          cout << "*";
          ji++;
        }
      cout << endl;
      ij++;
    }
}
