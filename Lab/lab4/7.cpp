#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cin >> a[i][j];
    //     }
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n ; j++){
                      
    //     }
    // }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
           cout << "." ;
           cout << i;
        
       
    
    for(int k = 1; k <= i - 1; k++)
    cout << ".";
    cout << endl;
}
}