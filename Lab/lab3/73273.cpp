#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    if (n % 2 == 0 || n % 3 == 0 ||n % 5 == 0 ||n % 7 == 0 )
    {
        cout << "No";
    }    else 
    cout <<"Yes";
    
}