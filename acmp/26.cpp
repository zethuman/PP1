#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
  int a,b,r1,a1,b1,r2,r;

  cin >> a >> b >> r1 >> a1 >> b1 >> r2;

  r = sqrt( (a1-a)*(a1-a) + (b1-b)*(b1-b) );

  if(r1+r2>=r && r+r2>=r1 && r+r1>=r2)
  {
    cout << "YES" ;
  }
  else cout << "NO";
}