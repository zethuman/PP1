#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<set>
 
using namespace std;
bool ispolindrome(string s)
{
    string b;
    b = s;
    reverse(s.begin(),s.end());
    if(b == s)
    {
        return true;
    }
    return false;
}
 
int main()
{
    string s;
    cin >> s;
    if(ispolindrome(s) == true)
    {cout << "YES";}
    else cout << "NO";
}