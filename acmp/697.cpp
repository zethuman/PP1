#include<iostream>

using namespace std;

int main()
{
  int a,b,c;

  cin >> a >> b >> c;

  int sum = 2*(a*c + b*c);

  if(sum % 16 == 0)
  {
    cout << sum / 16;
  }
  else cout << (sum / 16) + 1 ;
}