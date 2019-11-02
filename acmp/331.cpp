#include<iostream>

using namespace std;

int main()
{
  int h,m,x,y,d,l;
  char c;

  cin >> h >> c >> m;
  cin >> x >> y;

  d = h + x;
  l = m + y;

   if(l >= 60)
  {
    d = d + 1;
  }
  
  while(d > 23)
  {
    d = d - 24;
  }
  
  while(l > 59)
  {
    l = l -60;
  }

  if(d < 10)
  {
    cout << 0 << d << ":";
  }
  else cout << d << ":";
  
  if(l < 10)
  {
    cout << 0 << l;
  }
  else cout << l;
}