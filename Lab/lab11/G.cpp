#include <iostream>
#include <map>
#include <set>

using namespace std;

int main(){
    int a;
    cin >> a;
    set <string> s;
    for(int i = 0; i < a; i++){
        string x,y,z;
        cin >> x >> y >> z;
        s.insert(y);
    }
    cout << s.size();
}