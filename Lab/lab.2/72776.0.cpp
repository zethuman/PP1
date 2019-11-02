#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
    int n, k ;
    
    cin >> n >> k;
    
    if ( n > k )
    {
    	cout << "1";
	}
	if ( n < k )
    {
    	cout << "2";
	}
	if ( n == k )
	{
		cout << "0";
	}
	
}  
