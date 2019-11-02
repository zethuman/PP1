#include <bits/stdc++.h>
using namespace std;

bool bad(char a, char b){
    if(a == b && a == '1')return 1;
    return 0;
}

void rec(stack <int> s){
    if(!s.size())return;
    char a = s.top();
    s.pop();
    rec(s);
    cout<<a;
}
int main(){
    stack <int> s;
    string a;
    cin >>a;
    
    
    for(int i = 0; i < a.size(); i++){
        if(!s.size() || !bad(s.top(), a[i])){
            s.push(a[i]);
        }
        else{
            s.pop();
        }
    }
    rec(s);    

    return 0;
}