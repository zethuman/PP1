#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
  double a,b,c,d,dis;

  cin >> a >> b >> c >> d;
  
  dis = (c- a)*(c-a) + (d - b)*(d-b);

  
  cout << fixed  <<  setprecision(5) << sqrt(dis);
  
}
  