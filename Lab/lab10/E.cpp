#include<cmath>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<sstream>
#include<algorithm>
//freopen("input.txt", "r", stdin);
using namespace std;

bool isPrime(int a)
{

    if(a == 1 && a == 0){
        return false;
    }
    
        for(int i = 2; i <= sqrt(a); i++){
            if(a % i == 0)
            {
                return false;
            } 
        }return true;
    
}

int main()
{
   int n,x,a;
   cin >> n;
   vector<int> v;
   
   for(int i = 0; i < n; i++)
   {

       cin >> a;
       a = abs(a);
       if(a != 0){
       if(a != 1){
       v.push_back(a);
      }   }}
   int mycnt = count_if(v.begin(),v.end(),isPrime);
   
   cout << mycnt << " ";
}
