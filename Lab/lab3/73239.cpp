#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
       if (x == a[i])
       {
           cout << i + 1 << " ";
           break;

       }
       if (i == n - 1 && x != a[i])
       {
           cout << n;
       }
     

    }
    
    
   
    
    
    
}