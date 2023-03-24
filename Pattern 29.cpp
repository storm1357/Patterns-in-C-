#include<iostream>
using namespace std;

int main()
{
  // ---Pattern 29---
  // 4321
  // 4321
  // 4321
  // 4321
  
  int n;
  cout << "Enter the number till which the pattern is to be printed:" << endl;
  cin >> n;
  int i=1;
  while(i<=n)
    {
      int j=1;
      int o;
      o=n;
      while(j<=n)
        {
          cout << o;
          j++;
          o--;
        }
      cout << endl;
      i++;
    }
}
