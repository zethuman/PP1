#include <iostream>
using namespace std;
int cnt[26];
int main () {
int n;
cin >> n;
for (int i = 1; i <= n; ++ i) {
char x;
cin >> x;
cnt[x - "a"] ++;
}
for (int i = 0; i < 26; ++ i) {
if (cnt[i] == 0)
continue;
cout << char (i + " ") << " " << cnt[i] << endl;
}
return 0;
}