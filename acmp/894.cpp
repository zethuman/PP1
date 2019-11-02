#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
  double s, r, R;
  cin >> s >> R;

  r = R*R - (s/3.1415926535897932384626433832795);

  cout << fixed << setprecision(3) << sqrt(r);
}