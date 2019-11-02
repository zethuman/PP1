#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
	int n, ans=0, a=0;
    cin >> n;
    
    for ( int i = 0; i < n; i++ )
    {
    	int x;
    	cin >> x;
    	a = 0;
    	while ( x!= 0 )
    	{
    		int b = x % 10;
    		if ( b == 0 )
    		{
    		a++;
    		x /= 10;
		} ans += a;
	}
		cout << ans << endl;
	}
	

}