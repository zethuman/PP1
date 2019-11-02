#include<bits/stdc++.h>
using namespace std;

string s,t;
int main() {

   
    cin >> s >> t;

    if((int)t.size() % (int)s.size() != 0) {

    cout << "NO";

    return 0;
    }

    int cnt = (int)t.size() / (int)s.size();
    for(int i = 0;i < cnt;i ++) {
    int l = i * (int)s.size();
    if(t.substr(l,(int)s.size()) != s) {
    cout << "NO";
    return 0;
    }
    }
    cout << "YES";
    return 0;
    }
