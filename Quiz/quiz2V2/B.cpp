#include<iostream>
using namespace std;


int get_maximum(int x, int y, int z)
{

   int maxi1 = max(x, y);
   int maxi2 = max(maxi1, z);
   return maxi2;
}

int main()
{
    int x, y ,z;
    cin >> x >> y >> z;

    
 
    cout << get_maximum( x,  y, z);
    
}

