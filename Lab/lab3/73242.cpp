#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, x;
    cin >> n ;
    int a[n];

    for (int i = 0; i < n; i++)
    {
       cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
       if (a[i] != a[i+1])
       {
           cout << a[i] << " ";
       }
       
    }
    
    
    
   
    
    
    
}