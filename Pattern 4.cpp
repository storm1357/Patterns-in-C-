#include<stdio.h>
using namespace std;

int main ()
{
  // ---Pattern 4---
  // ***
  // **
  // *
  
  int n;
  cout << "Enter the number of rows:" << endl;
  cin >> n;
  int i = 1;
  while (i<=n)
    {
      int j=n-i+1;
      while(j)
        {
          cout << "*";
          j--;
        }
      i++;
      cout << endl;
    }
}
