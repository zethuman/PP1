#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int n,m,k,first,second,sum;
	cin>>n>>k;
	 
	 first=k/100;
	 second=k%10;
	 
	 sum=first+second;
	 
	cout<<n+sum;
 
}
