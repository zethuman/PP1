#include<iostream>

using namespace std;

int main()
{
  int a,b,d,n;

  cin >> a >> b >> n;

  d = a + (n - 1)*(b-a);

  cout << d;
}