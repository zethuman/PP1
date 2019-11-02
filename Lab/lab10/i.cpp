#include<iostream>
#include<algorithm>
#include<map>
#include<string>
#include<vector>

using namespace std;

string toBin(unsigned long long num);
string toBin(unsigned long long num)
{
    unsigned long long copy, a = 0;
    string res,str;
    while(num != 0)
    {
        copy = num;
        copy = copy / 2;
        a = num % 2;
        num = copy;
        str += to_string(a);
    }
    for(int i = str.size() - 1; i >=0; i--)
    {
        res += str[i];
    }

    cout <<  res << endl;
    return res;
}

int main()
{
   int n,a;
   cin >> n;
   vector<int> v;

   for(int i = 0; i < n; i++)
   {
       cin >> a;
       v.push_back(a);
   }
   
   for_each(v.begin(),v.end(),toBin);
}