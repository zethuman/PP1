#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int a;

  cin >> a;

  if(a == 0)
  {
    a = 1;
  }

  cout << a + 1;
}