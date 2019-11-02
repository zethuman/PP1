#include<iostream>

using namespace std;

int main()
{
  int n, m;
  int maxi = 0;
  cin >> m;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for(int i = 0; i < n; i ++)
  {
    if(a[i] > maxi )
    {
      maxi = a[i];
    }

  }

  cout << maxi * m;
}