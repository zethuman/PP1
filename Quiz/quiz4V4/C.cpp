#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
  int x,n;
  cin >> x >> n;
  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  if(x >= n)
  {
    cout << "YES";
  }
  else cout << "NO";
}