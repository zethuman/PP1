#include<iostream>
#include <deque>

using namespace std;

deque<string> d;

int main()
{
    int n, x;
    cin >> n;
    string s;

   for(int i = 0; i < n; i++)
   {
       cin >> s >> x;
       if(x == 1)
       d.push_front(s);
       else d.push_back(s);
   }
   for (int i = 0; i < d.size(); i++)
   {
       cout << d[i] << " ";
   }
}