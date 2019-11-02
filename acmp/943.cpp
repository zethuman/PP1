#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
  int n,m,x,y;
  int res;
  cin >> n >> m >> y >> x;

  res = (y - 1) * m + ((y%2 == 0) ? (m - x) : (x - 1));

  cout << res;

}