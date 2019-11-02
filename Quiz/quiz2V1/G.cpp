#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxi )
        maxi = a[i];
    } 
    int mini = 100000;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < mini )
        mini = a[i];

    } 
    
    if (mini == maxi )
    {
        cout << "Yes";
    }    
    else cout << "No";
}

