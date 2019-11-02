#include<iostream>
#include<cmath>
#include<vector>
#include<map>
#include<iomanip>
#include<algorithm>

using namespace std;

int main()
{
     int x,n;
     int sum;
     cin >> x >> n;
     int a[n];

     for(int i = 0; i < n; i++)
     {
         cin >> a[i];
     }

     for(int i = 0; i < n; i++)
     {
         sum += a[i];
     }
     if(sum <= x)
     {
         cout << "YES";
     }
     else cout << "NO";


    
}