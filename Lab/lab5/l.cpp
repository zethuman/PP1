#include <iostream>
#include <cstring>
#include<algorithm>
using namespace std;


string s,b;

int main ()
{
    cin >> s;
    b = s;
    sort(s.begin(),s.end());
    
    if(b == s)
    {
        cout << "YES";
    }
    else cout << "NO";
}