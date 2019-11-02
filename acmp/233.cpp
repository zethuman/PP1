#include<iostream>

using namespace std;

int main()
{
  int n;
  int k = 0;
  int index = 0;
  cin >> n;

  int a[n];

  for(int i = 1 ; i <= n; i++)
  {
    cin >> a[i];
  }

  for(int i = 1 ; i <= n; i++)
  {
    if(a[i] <= 437)
    {
      index = i;
      break;
    }
    else k++;

  }

  if(k == n)
  {
    cout << "No crash";
  }
  if(k != n)
  {
    cout << "Crash " << index;
  }

}