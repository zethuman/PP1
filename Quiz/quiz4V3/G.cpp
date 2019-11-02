#include <iostream>
#include <map>

using namespace std;


int main()
{
   int n;
   cin >> n;
   int a[n];
   int mini = 10000000;

   for(int i = 0; i< n; i++)
   {
     cin  >> a[i];
   }
  for(int i = 0; i < n; i++)
  {
    if((a[i] + a[i + 1]) < mini)
    mini = (a[i] + a[i + 1]);
  }
  cout << mini;
}
        

