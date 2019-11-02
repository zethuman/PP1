#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

struct Passenger{
   string name;
   int things,kg;
   
   Passenger( string _name, int _things, int _kg)
   {
      name = _name;
      things = _things;
      kg = _kg;
   }
};

int maxi = 0;
int main()
{
    string name;
    int things,kg;
    vector<Passenger> v;
    int n;
    cin >> n ;
 
  for(int i = 0; i < n; i++)
  {
    cin >> name >> things >> kg;
    v.push_back(Passenger(name, things,kg));
     
  }
     

  for(int i = 0; i < v.size(); i++)
  {
      maxi = max(maxi, v[i].things);

  }
  for(int i = 0; i < v.size(); i++)
  {
     if(maxi == v[i].things)
     {
         cout << v[i].name;
         break;
     }
      
  }


  

  
}