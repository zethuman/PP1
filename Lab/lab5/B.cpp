#include<iostream>
#include <string>
#include<algorithm>

using namespace std;

int main ()
{   
   
    string a;
    cin >> a;



    for (int i = 0 ; i < a.length(); i++){



        if(a[i] > 64 && a[i] < 91)
            toupper(a[i]);
        if (a[i] > 96 && a[i] < 123)
            a[i]  -= 32; 
    }
cout << a << endl; 


return 0; 

} 
