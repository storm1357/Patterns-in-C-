#include <iostream>
using namespace std;

int main ()
{
  // ---Pattern 17---
  // *****
  //    *
  //   *
  //  *
  // *****

  int n;
  cout << "Enter the number of rows for the pattern:" << endl;
  cin >> n;
  int i=1;
  while (i<=n)
    {
      int j=1;
      int m=n+1;
      while (j<=n)
        {   
          if(i==1||i==n)
          {
            cout << "*";
          }
          else if(i+j==m)
          {
            cout << "*";
          }
          else
          {
            cout << " ";
          }
          j++;
        }
      i++;
      cout << endl;
    }
}
