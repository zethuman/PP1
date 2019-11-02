#include<iostream>

using namespace std;

int main()
{
  int n;
  cin >> n;
  int a,b;
  
  if(n <= 6)
  {
  if(n == 2)
  {
   a = 5;
  }
  if(n == 5)
  {
     a = 2;
  }
  if(n == 4)
  {
    a = 3;
  }
  if(n == 3)
  {
    a = 4;
  }
  if(n == 6)
  {
    a = 1;
  }
  if(n == 1)
  {
    a == 6;
  }
  }

  
  cout << a << " " << n * 6;
}