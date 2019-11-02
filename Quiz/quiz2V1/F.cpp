#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ( a == c && b < d || a < c && b >= d || a < c && b <= d )
    {
        cout << "Yes";
    }
    else cout << "No";
    
}

