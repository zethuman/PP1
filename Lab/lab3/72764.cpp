#include <iostream>
using namespace std;
int main () {
int n;
cin >> n;
int a[500500];
int x = 1e9 + 17;
for (int i = 1; i <= n; ++ i) {
cin >> a[i];
}

for (int i = 1; i <= n; ++ i) {
if (a[i] > 0)
x = min (x, a[i]);
}
cout << x;
return 0;
}