#include <iostream>
#include <math.h>
using namespace std;

int main ()
{cout << cnt;
    int n, temp,a;
    cin n;
    int a[500500];
    cin >>n;

    for (int i =1; i <= n; i++){
    cin << a[i];
    }
    sort(a,a+n);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[n-1]) 
        temp++;
    }
cout << temp;

}

