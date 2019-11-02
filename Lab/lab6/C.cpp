#include<iostream>
#include <math.h>
#include<algorithm>
using namespace std;

int  array(int n , int a[] , int b[])
{
    
    for (int i = 0; i < n; i++){
       for (int j = i+1; j < n; j++)
          if (b[i] < b[j])
          {
             int buf = b[i];
             b[i] = b[j];
             b[j] = buf;

          }}
    
    int p;
    
    for (int i = 0; i < n; i++){
    if (b[i] != b[i + 1])
    {
        {
            for(int j = 0 ; j < i + n ; j++)
        if (a[i] == b[i + j])
        {
             p++;
        }
      cout << a[i] << " " << b[i] << " ";
    }}   
    }
    
        cout  << endl << p; 

}

int main()
{
 int n;
 cin >> n;

    int a[n];
    int b[n];
    for (int i = 0; i < n; i++){
    
    cin >> a[i] ;
    
    }
    for (int i = 0; i < n; i++){
    
    cin >> b[i] ;
    
    }

 array(n , a, b);

 }