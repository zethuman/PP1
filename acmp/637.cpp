#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  int x, cnt = 0,sum = 0;
  int n;
  cin >> n;
  int a[n];

  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  cin >> x;
  
  for(int i = 0; i < n; i++)
  {
     if(a[i] < x)
     {
       sum += a[i];
     }
     else if(a[i] >= x)
      cnt++;
  }

  cout << sum + cnt*x;
}