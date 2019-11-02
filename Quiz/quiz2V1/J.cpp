#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int a , b, c;
    cin >> a >> b >> c;

    if (a * b < c)
    {
        cout << "No";
    }
    if (a * b == c)
    {
        cout << "No difference";
    }
    if (a * b > c)
    {
         cout << "Yes";
}
}

