#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int n,k = 0;
  cin >> n;

  int a[n];

  for(int i = 1; i <= n; i++) 
  {
    cin >> a[i];
  }

  for(int i = 1; i <= n; i++)
  {
    if(a[i] > a[i + 1])
    {
      swap(a[i],a[i+1]);
      k++;
    }
  }

  cout << k << " ";
}
