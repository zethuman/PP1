#include<iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int n,maxi = -100000000, k = 0,l = 0;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        cin >> a[i][j];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

       if (i == j){
        
        if(maxi < a[i][j])
        {
            maxi = a[i][j],k = i + 1,l = j +1;
        }
        
            }
    }}
     cout << "Maximum element is:  " << maxi << " with coordinates: " << k << ";" <<l;
}