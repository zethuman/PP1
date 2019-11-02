#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  int mini = 1000000;

  for(int i = 0; i< n; i++)
  {
    cin >> a[i];
  }

  for(int i = 0; i< n; i++)
  {
       if(a[i]+a[i +1 ]+ a[i + 2] < mini)
       {
         mini = a[i]+a[i +1 ]+ a[i + 2];
       }
   }
   cout << mini;
  
}