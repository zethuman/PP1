#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    int row[n],col[m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            cin >> arr[i][j];


        for (int i = 0; i < n; i++){
                row[i] = 0;
                for (int j = 0; j < m; j++) 
                row[i] += arr[i][j];
        }
        
        for (int j = 0; j < m; j++){
                col[j] = 0;
                for (int i = 0; i < n; i++) 
                col[j] += arr[i][j];
        }

        for ( int i = 0; i < n; i++ )
            cout<<"The sum of row number " <<  i+1 <<  " is " << row[i] << endl;
        for (  int j = 0;  j < m;  j++ )
            cout<<"The sum of column number "<<j+1<<" is "<<col[j]<< endl;


    return 0;
}