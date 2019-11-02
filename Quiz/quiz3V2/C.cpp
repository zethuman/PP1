#include <iostream>
#include <algorithm>
#include <set>
#include<algorithm>
using namespace std;

int main()
{
   set<string> s;
   string st;
   
  
   while(cin>>st){
     s.insert(st);
   }
   if(s.size()<7){
     cout<<"Not good"<<endl;
   }
   else if(s.size()>7)cout<<"Good";
   
}