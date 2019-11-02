#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
  int n;
  int cnt = 0;
  cin >> n;

  for(int i = 0; i < 20; i++)
  {
    if(n == pow(2,i))
    {
      cnt++;
    }
  }

  if(cnt == 1)
  {
    cout << "YES";
  }
  else cout << "NO";
}