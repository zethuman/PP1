#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string s,b;
    cin >> s;
    b = s;
    reverse(s.begin(), s.end());
    if(b == s)
    {
        cout << "YES";
    }
    else cout << "NO";
   
}