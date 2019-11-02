#include<iostream>

using namespace std;

int main()
{
  char c;
  int n;

  cin >> c >> n;

  if(c == 'A' or c == 'C' or c == 'E' or c == 'G')
  {
    if(n % 2 == 0)
    {
      cout << "WHITE";
    }
    else cout << "BLACK";
  }
  else if(c == 'B' or c == 'D' or c == 'F' or c == 'H')
  {
    if(n % 2 == 0)
    {
      cout << "BLACK";
    }
    else cout << "WHITE";
  }
}