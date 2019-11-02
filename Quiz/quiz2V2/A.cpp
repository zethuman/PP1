#include<iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];
  
    int g = 0;
    
    for (int i = 0; i < n; i++ )
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++ )
    {
        if (a[i] == 0 )
        {
          g++;
        }
    }
    for (int i = 0; i < n; i++ )
    {
        if (a[i] == 0 && a[i + 1] != 1 )
        {
          g--;
        }
    }
    
    cout << g ;
}

