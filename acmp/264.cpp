#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int n,b = 0;
  cin >> n;
  int a[n];
  int maxi = -1;

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }  

  for(int i = 0; i < n; i++)
    {
    if(a[i] > 0)
    {
      b++;
    }
    else b = 0;

    if(b > maxi)
    maxi = b;
    }
  
  cout << maxi;

} 