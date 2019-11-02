#include <bits/stdc++.h>

using namespace std;

int main(){
    string str;
    getline(cin,str);
    for( int i=0; i<str.size(); i++){
        if ( str[i] == '1' and str[i+1] == '1' ){
            str[i] = '0';
            str.erase(str.begin()+i+1);
        }
    }
    cout << str;
    return 0;
}