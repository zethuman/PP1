#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  long long a,b,c;
  cin >> a >> b >> c;

  signed long long int S,V;

  S = 2*(a*b + b*c + a*c);
  V = a*b*c;

  cout << S << " " << V;
}
