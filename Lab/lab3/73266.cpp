#include<iostream>
#include<algorithm>
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
    for (int i = 0; i < n; i++)
       for (int j = i+1; j < n; j++)
          if (a[i] < a[j])
          {
             int buf = a[i];
             a[i] = a[j];
             a[j] = buf;
          }
    for (int i = 0; i < n; i++){
       cout <<  a[i] << " ";
    }
    
}