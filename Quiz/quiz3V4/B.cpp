#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s, k;
    cin >> s >> k;
    
    if(s.size() == k.size()){
    if(s.find(k))
    {
      cout << "YES";
    }else cout << "NO";
    }
    else cout << "NO";
}