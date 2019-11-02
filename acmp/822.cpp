#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
  double a,b,c,d,e,f;

  cin >> a >> b >> c >> d >> e >> f;

  

  double s = (((a - e)*(d - f)) - ((b - f)*(c - e)))/2;

  cout << fixed << setprecision(1) << abs(s);

}