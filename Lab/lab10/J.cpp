#include<iostream>
#include<algorithm>
#include<sstream>
#include<cmath>
#include<iomanip>

using namespace std;

int updegree( long long int n)
{
    for(long long int  i = 0; i <= n; i++)
    {
       cout << setprecision(100) << pow(i,i) << " " ;
    }
    return 0;
   
}

int main()
{
    long long int n;
    cin >> n;

   updegree(n);


}