#include <string>
#include <iostream>
using namespace std;

int main() {
string s1, s2;
getline(cin, s1);
getline(cin, s2);
cout << (s2.find(s1) != string::npos ? "yes" : "no");
}