#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int maxi = 0;
  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for(int i = 0; i < n; i++)
  {
    if(i % 2 == 0 && i != 0)
    {
      if((a[i] - a[i - 1]) > maxi)
      {
        maxi = a[i] - a[i - 1];
      }
    }
  }
  cout << maxi;
}