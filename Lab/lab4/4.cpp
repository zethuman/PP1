#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> a[i][j];
    //     }
    // }
    // int g = 0;
   int num = 0;
    for(int i = 0; i < n; i++)
    a[i][0] = a[0][i] = num++;

    

    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
           a[i][j] =  a[0][j]*a[i][0];
        }
    }
    cout << num << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           cout << a[i][j] << " ";
        }
        cout << endl;
    }
}