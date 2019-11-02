#include<iostream>
#include <cmath>
using namespace std;

int str(string s) 
{  
  for(int i = 0; i < s.size(); i++){
      
      if( i % 2 == 0){
		s[i] = toupper(s[i]);
      }
    }
    for(int i = 0; i < s.size(); i++){

    cout << s[i];
    }
 
}

int main()
{

 string s ;
 cin >> s;

 str(s);
 }