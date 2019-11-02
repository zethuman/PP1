#include<iostream>
 #include<vector>
 #include<set>
  #include<queue>
 #include<deque>
// #include<map>
#include<algorithm>
using namespace std;
deque<int> d,dl;
int main()
{

   int n;
   
   while(cin >> n)
   {
    
       {
           if(n == 0)
           { 
               d.push_back(n);
           }
           else if(n != 0)
           dl.push_back(n);
           

       }
       
   }
   for(int i = 0; i < dl.size(); i++)
       {
         cout << dl[i] << " ";
       }
       
       for(int i = 0; i < d.size(); i++)
       {
         cout << d[i] << " ";
       }


}
