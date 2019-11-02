#include <iostream>
#include<algorithm>
using namespace std;
 
int main()
{
 int n;
 int cnt = 0, mini = 0, temp = 0;
 cin >> n;
 int a[n];

 for(int i = 0; i < n; i++)
 {
   cin >> a[i];
 }

 for(int i = 0; i < n; i++)
 {
   if(a[i] == 1)
   {
     cnt++;
   }
   else temp++;
 }

 mini = min(cnt,temp);

 cout << mini;
}