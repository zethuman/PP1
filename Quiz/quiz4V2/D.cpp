#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  int mini = 100000000;
  cin >> n;
  int a[n];

  for(int i =0 ;i < n; i++)
  {
    cin >> a[i];
  }
  
  for(int i =0 ;i < n; i++)
  {
    mini = min(mini,a[i]);
  }

cout << mini;
}