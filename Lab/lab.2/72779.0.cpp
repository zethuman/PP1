#include <iostream>
#include <math.h>

using namespace std;

int main ()
{ 
    int n, x ;
    int maxi = 0;
    cin >> n;
 
 for ( int i = 0 ; i < n ; i++)
 {
    cin >> x ;
    maxi = max( maxi , x ) ;
 }
    cout << maxi ;
 }  
