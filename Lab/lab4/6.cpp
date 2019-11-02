#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int k = 0,l = 0, maxi = -1e9 - 17;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if(maxi < a[i][j]){
            maxi = a[i][j], k = i + 1 , l = j + 1 ;
        }}
    }
    // }cout << maxi << endl;
   cout << k << " " << l;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //        cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}