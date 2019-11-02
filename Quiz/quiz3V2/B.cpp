#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>
using namespace std;

int main()
{
   map<string, size_t> m;
   string word;

   int n;
   cin >> n;

   for(int i = 0; i < n; i++)
   {
       cin >> word;
       m[word]++;
   }
   
   for (const auto &p : m) 

   cout << p.first << " " << p.second << endl;
  
}