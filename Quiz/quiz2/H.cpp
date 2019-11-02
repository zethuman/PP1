#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s[n];

    for (int i = 0; i < n; i++){
         cin >> s[i];
    }
    
   
    int minEl;
    int mini = 10000000000;
    for (int i = 0; i < n; i++)
    {
     
       
           if (mini > s[i])
           mini = s[i];
           miniEl = mini + mini;
       
    }

    int sum;
    int maxEl;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
      
       
           if (maxi < s[i])
           maxi = s[i];
           maxEl = maxi + maxi;
       
    }
       cout << maxEl - miniEl;
}

