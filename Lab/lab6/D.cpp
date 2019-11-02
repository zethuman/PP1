#include<iostream>
#include <math.h>
using namespace std;

bool  findEl(int a[], int n, int g)
{
  
    for (int i = 0; i <= n; i++){
    
    if (a[i] == g)
    {
      return true;     
    }
    
        }
        return false;
        

}

int main()
{
 int n;
 cin >> n;
int a[n];
 for (int i = 0; i < n; i++)
 {
     cin >> a[i];
 }
  int g, p;
  cin >> g;

 if (findEl( a, n , g))
        {
            cout << "Yes";
        }
        else cout << "No";

 }