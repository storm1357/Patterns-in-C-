#include <iostream>
using namespace std;

int main()
{
  //---Pattern 2---
  // *
  // **
  // ***
  
  int n ;
  cout << "Enter the number of rows for the pattern:" << endl;
  cin >> n;
  int i=1;
  while(i<=n)
  {
    int j=1;
    while(j<=i)
    {
      cout << "*";
      j++;
    }
    i++;
    cout << endl;
  }
}
