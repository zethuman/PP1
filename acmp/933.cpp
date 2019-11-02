#include<iostream>

using namespace std;

int main()
{
  int a,b,c,t;

  int sum;

  cin >> a >> b >> c >> t;

  if(t < a)
  {
    sum = t*b;
  }

  if(a < t)
  {
    sum = (t-a)*c + a*b;
  }
  if(t == a)
  {
   sum = a*b;
  }

  
  cout << sum;
}