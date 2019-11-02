#include <iostream>
#include<sstream>
#include <math.h>
 
using namespace std;
 
int main()
{
  int n;
  int g;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++)
  {
      cin >> a[i];
  }
  for(int i = 0; i < n; i++)
  {
      if ( a[i] < a[i + 1])
      {
          g++;
      }
     

  }
 
  if (g + 1 == n)
  {
      cout << "Interesting";

  }
  else cout << "Not interesting";

}