#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
 int a,b,c;

 int maxi = -1;

 cin >> a >> b >> c;

 if(a >= 94 && a <= 727 && b >= 94 && b <= 727 && c >= 94 && c <= 727)
 {
   maxi = max(a,b);
   maxi = max(maxi,c);
   cout << maxi;
 }
 else cout << "Error";
}
