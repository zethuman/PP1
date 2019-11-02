#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main()
{
 int w,h,r;

 cin >> w >> h >>r;

 if(2*r <= w && 2*r <= h)
 {
   cout << "YES";
 }
 else cout << "NO";
 
}