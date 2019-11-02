#include <iostream>
#include<sstream>
#include <math.h>
#include<vector>

using namespace std;
 
int main()
{
   int n;
   cin >> n;
   int a[n];

 for(int i = 0; i < n; i++)
 {
     cin >> a[i];
 }
 int maxi = 0;

 for(int i = 0; i < n; i++)
 {
      if (a[i] > maxi)
      maxi = a[i];
 }
   stringstream ss;
   ss << maxi;
   int k = 0;
   ss >> k;
   
  

 for(int  i = 0; i < n; i++)
 {
     if(k == a[i]){
     a[i] = 1;
 } else a[i] = 0;
 }
 

for(int i = 0; i < n; i++)
{
    cout << a[i] << " ";
}


}

/*
#include <iostream>
#include<sstream>
#include <math.h>
#include<vector>

using namespace std;
 
int main()
{
   vector<int> v;
   int a, n;
   cin >> n;

 for(int i = 1; i <= n; i++)
 {
     cin >> a;
     v.push_back(a);
 }
 int maxi = 0;

  for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
 {
      if (*it > maxi)
      maxi = *it;
 }
 

 
   stringstream ss;
   ss << maxi;
   int k = 0;
   ss >> k;
   



 for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
{
     if(k == *it){
     *it = 1;
 } else *it = 0;
 }
 

for(vector<int>:: iterator it = v.begin(); it != v.end(); it++)
{
    cout << *it << " ";
}


}*/