#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
    string s,b;
    string c,d;
    cin >> s;
    b = s;
    reverse(s.begin(), s.end());
    c = s;
    reverse(s.begin(), s.end());
    s.erase(s.begin() + 0);
    d = s;
    reverse(s.begin(), s.end());
    if(b == c || d == s )
    {
        cout << "YES";
    }
    else cout << "NO";
   
}