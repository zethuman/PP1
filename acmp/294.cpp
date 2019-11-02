#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
  int a,b,c,a1,b1,c1;

  cin >> a >> b >> c >> a1 >> b1 >> c1;

  int  pr, pr2 , m, k;

  pr = (a*b)/100;
  pr2 = (a1*b1)/100;

  int pro = a - pr;
  int pro2 = a1 - pr2;

  int maxi = max(pro,pro2);

  if(maxi == pro)
  {
    m = abs((a - pr) - (a1 - pr2))*c;
  }
  else m = abs((a - pr) - (a1 - pr2))*c1;

  int sum = pr*c + pr2*c1 + m;
 

  cout << sum;



}