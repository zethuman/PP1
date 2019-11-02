#include<iostream>

using namespace std;

int main()
{
  int n,m,k,alive,i,j;

   cin >> n >> m >> k;

  for(int c = 0; c < k; c++)
  {
    cin >> i >> j;
  }

  alive = n*m - k;

  cout << alive;
}