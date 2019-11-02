#include<iostream>
#include<cmath>

using namespace std;

int main()
{
  unsigned long long int a,b,g;
  
  double s;

  cin >> a >> b;
  
  s = sqrt(a*b);
  

  if(s - int(s) == 0)
  {
    g = s;
    cout << g;
  }
  else cout << 0;
}