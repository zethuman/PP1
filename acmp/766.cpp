#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int n,m,k;
  cin >> n >> m >> k;

  if(n*m == k || n*m > k)
  {
    cout << "YES";
  }
  else cout << "NO";
}