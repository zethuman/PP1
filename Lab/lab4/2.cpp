#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int n,maxi = 0 , maxi2 = 0;
    cin >> n;
    int a[n][n];
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
    {
        cin >> a[i][j];
    }
    }
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
    {
       if (a[i][j] > maxi)
       {
           maxi2 = maxi;
           maxi = a[i][j];
           
       }
    }
    }
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
    {
       if (a[i][j] > maxi2 && a[i][j] != maxi)
       {
           maxi2 = a[i][j];
           
       }
    }
    }
        cout << maxi2;
    }