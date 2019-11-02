#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    int maxi = 0, maxi2 = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for(int i = 0; i < n; i++)
    {
     if(a[i] > maxi)
     {
         maxi2 = maxi;
         maxi = a[i];
     } 


    }
   
   for(int i = 0; i < n; i++)
   {
    if(maxi2 == a[i])
    {
        cnt++;
    }
}
cout << cnt;
}