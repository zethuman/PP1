#include<iostream>
#include <algorithm>
using namespace std;

int main ()
{
    int n,maxi = -100000,sum = 0;
    cin >> n;
    int a[n][n];

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++)
    //     cin >> a[i][j];
    // }
     for (int i = 1; i <= n; i++){
        for (int j = n; j >= 1; j--){
  
          cin >> a[i][j];
      }
}
    
//     for (int i = 1; i <= n; i++){
//         for (int j = n; j >= 1; j--){

//        cout << a[i][j] << " ";
//     }
//      cout << endl;
// }
 for (int i = 1; i <= n; i++){
        for (int j = n; j >= 1; j--){

       if(i == j)
       {
           sum += a[i][j];
       }
    }
     
}
cout << sum;
}