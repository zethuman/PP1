#include<iostream>
#include <math.h>
using namespace std;

int  array(int n)
{
    int a[n];
    for (int i = 0; i < n; i++){
    
    cin >> a[i] ;
    
    }
    
 int b[n];
     for (int i = 0; i < n; i++){
    
      cin >> b[i] ;
    
    }
 
    for (int i = 0; i < n; i++){
    
  
     
     cout << abs(b[i] - a[i]) << " ";
        }

}

int main()
{
 int n;

 cin >> n;

 array(n);

 }