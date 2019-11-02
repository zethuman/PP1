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
    set<string> v;
   
    while(cin >> s)
    {
        if(ispolindrome(s) == false)
        {
            v.insert(s);
        }
    }
    

    for(set<string>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }
}