#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int ans = 0;
    int  n ,x, y;
    cin >> n >>x >> y ;
    int a[n];
   
    

    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
      if (a[i] >= y - x )
      {
      ans++;
      }
    }
    cout << ans;
    
     return 0;
    }
