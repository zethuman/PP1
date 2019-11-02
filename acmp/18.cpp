#include <iostream>

using namespace std; 

string mult(string x, int y){
    int carry = 0, t;
    string result = "";
    for (int i = x.size() - 1; i >= 0; i--){
        t = int(x[i] - '0')*y + carry;
        carry = t/10;
        result = char(t%10 + '0')+result;
    }
    while(carry){			
        result = char(carry%10 + '0') + result;
        carry /= 10;
    }
    return result;
}

int main(){
    int n;
    string str = "1";
    cin >> n;
    for(int i = 2; i <= n; i++) str = mult(str, i);
    cout << str << endl;
}
