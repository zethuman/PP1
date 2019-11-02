#include<iostream>
#include<cmath>

using namespace std;

int a,b;

int nod(int q, int t)
{
   if(t == 0) return q;
   return nod(t, q % t);
}

int noc(int m,int n)
{
  return m * n / nod(m,n);
}

int main()
{
  cin >> a >> b;
  cout << noc(a,b);
}