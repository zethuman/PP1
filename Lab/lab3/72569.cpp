#include <iostream>
using namespace std;

int main () 
{
  int n;
  cin >> n;
  int a[n];

   for (int i = 1; i <= n; ++ i) {
       cin >> a[i];
    }
    int maxi = -1e9 - 17, position = 0;
   for (int i = 1; i <= n; ++ i) {
     
      if (a[i] > maxi)
      maxi = a[i], position = i;
}
      cout << position;


    return 0;
}
