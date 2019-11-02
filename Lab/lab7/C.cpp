#include<iostream>
#include<cmath>
using namespace std;

bool Bsearch(int n, int a[], int x)
{
    int g = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> x;
   
    for (int i = 0; i < n; i++)
    {
     if ( x == a[i])
       {
           g++;
       }
    }

    if (g == 0)
    {
        return false;
    }

    return  Bsearch(n, a[], x);
}

int main()
{
   int n , x;
   cin >> n;
   int a[n];
   int g = 0;

   Bsearch(n , a[] , x);

    if ( g == 0)
    {
        cout << "No";

    }
    else cout << "Yes";
   
}

