#include<iostream>
#include <cmath>
using namespace std;

int str(string s)
{
     int g = 0;
     for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='A' || s[i]=='a' || s[i]=='o' || s[i]=='O' || s[i]=='U' || s[i]=='u' || s[i]=='E' || s[i]=='e' || s[i]=='I' || s[i]=='i')
             s[i] = 0; 
      
 
    } 
      for(int i=0; i<s.length(); i++)
    {
        if(s[i] != 0)
          
            cout << s[i];
    }
    
}

int main()
{
 string s;
 int n , g;

 getline(cin , s);

 str(s);

 }