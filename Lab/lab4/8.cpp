#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n, m, temp = 0, drop = 10000, subject;
    cin >> n >> m;
    int a[n][m];

    for (int  i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    
     for (int  i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        temp += a[i][j];
        }
    }

     for (int  i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
       if ( temp < drop )
       drop = temp;
       subject = i;
        }
    }


    cout << subject++ ;

 }