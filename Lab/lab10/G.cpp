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
bool f(int i , int j)
{
    return (i == j);
}

int main()
{
   int n,a;
   cin >> n;
   vector<int> v;
   vector<int>:: iterator it;
   set<int> st;
   set<int>:: iterator ite;

   for(int i = 0; i < n; i++)
   {
       cin >> a;
       v.push_back(a);
       st.insert(a);
   }
   it = unique(v.begin(),v.end());
   v.resize(distance(v.begin(),it));
   unique(v.begin(),v.end(),f);
   for(ite = st.begin(); ite != st.end();ite++){
    

   for(it = v.begin(); it != v.end();it++){
   stringstream ss;
   ss << *it;
   int l;
   ss >> l;
    cout << *ite << " x " << l << " = " << (*ite)*l << endl;
}}

}