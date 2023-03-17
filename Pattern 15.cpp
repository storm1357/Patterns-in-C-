#include <iostream>
using namespace std;

int main()
{
  // ---Pattern 15---
  // *    *
  // **  **
  // ******
  // ******
  // **  **
  // *    *

  int n;
  cout << "Enter the number of rows for the pattern to be printed:" << endl;
  cin >> n;
  int i=1, m=n;
  while (i<=n)
    {
      int j=1;
      while(j<=i)
        {
          cout << "*";
          j++;
        }
      int s=1;
      while (s<=2*m-2)
        {
          cout << " ";
          s++;
        }
      int k=1;
      while (k<=i)
        {
          cout << "*";
          k++;
        }
      i++;
      m--;
      cout << endl;
    }
  int ij=1, mn=n;
  while (ij<=n)
    {
      int ji=mn;
      while (ji)
        {
          cout << "*";
          ji--;
        }
      int sp=ij*2-2;
      while (sp)
        {
          cout << " ";
          sp--;
        }
      int kk=mn;
      while (kk)
        {
          cout << "*";
          kk--;
        }
      ij++;
      mn--;
      cout << endl;
  }
}
