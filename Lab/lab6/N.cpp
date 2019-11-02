#include<iostream>
#include <cmath>
#include<algorithm>
using namespace std;

// int arr2( int *a[],int n, int m)
// {
//    for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             cin >> a[i][j];
//         }
//     }
//      for(int i = 0; i < m; i++)
//     {
//         for(int j = 0; j < n; j++)
//         {
//            cout << a[j][i] << " " ;
//         }
//         cout << endl;
// }
// return 0;
// }

int main()
{
    int n,m;
    cin >> n >> m;
    int a[n][m];




    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
     for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[j][i] << " " ;
        }
        cout << endl;
    }
    

}