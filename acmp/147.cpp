#include<iostream>
#include<cmath>

using namespace std;

int fib(int n){
  if(n<2) return n;
     return fib(n-1)+fib(n-2);
}

int main()
{
  int a,b;
  cin >> a;

  cout << fib(a);
}