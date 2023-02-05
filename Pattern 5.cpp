#include <iostream>
using namespace std;

int main()
{
   // ---Pattern 5---
   // ***
   //  **
   //   *
   
   int n;
  cout << "Enter the number of rows for the pattern:" << endl;
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
          cout << "*";
          j--;
        }
      i++;
      cout << endl;
  }
}
