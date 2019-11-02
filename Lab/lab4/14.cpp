#include<iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int n,maxi , i ,j;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
        cin >> a[i][j];
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){

            if (i == j){
        
        maxi = max(maxi, a[i][j]);
        
            }
    }}
     cout << maxi;
}