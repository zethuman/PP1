
#include<iostream>
#include<cmath>
using namespace std;


int main()
{
   int n;
   cin >> n;
   int a[n];

   for(int i = 1; i <= n; i++)
{
    cin >> a[i];

} 
int sum = 0;
  for(int i = 1; i <= n; i++)
{
    sum = sum + a[i] * i;

}
cout << sum;

}

