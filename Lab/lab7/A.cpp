#include<iostream>
#include<cmath>
using namespace std;

int degree( int n )
{
    if (n == 0)
    {
        return 1;
    }

    return 2*degree(n-1);
    
    
}



int main()
{
   int n, a;
   a = 2;
   cin >> n;

   cout << degree(n);
}

