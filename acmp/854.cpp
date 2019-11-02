#include<iostream>

using namespace std;

int main()
{
  int a,b;
  string s;

  cin >> a >> b;

  cin >> s;

  if(s == "heat")
  {
    cout << max(a,b);
  }
  if(s == "freeze")
  {
    cout << min(a,b);
  }
  if(s == "fan")
  {
    cout << a;
  }
  if(s == "auto")
  {
    cout << b;
  }
  
}