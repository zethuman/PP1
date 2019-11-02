#include<iostream>
using namespace std;

int main()
{

    int a , b , c, x, y,z,d;
    cin >> a >> b >> c;

    x = a - b;
    y = a - c;

    z = x + y;

    d = b + c;

    cout << min(z,d);
    return 0;
    }
