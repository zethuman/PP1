
#include <string>
#include <iostream>
using namespace std;

int main() {
    
    string s, t;
    cin >> s >> t;
    size_t pos = s.find(t);
    if(pos != -1)
    {
        cout << "YES";
    }
    else cout << "NO";
  

  
}