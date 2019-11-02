#include<iostream>
#include<algorithm>
using namespace std;


int main ()
{
    int temp = 0; 
    string t;
    string s;
    cin >> s >> t;
    
	for(int i = 0; i < s.size(); i++){
        for (int j = 0 ; j < s.size(); j++)
		s[i] = tolower(s[i]);
        t[i] = tolower(t[i]);
     if (s[i] == t[i])
    {
        temp++;
    }
    
    }
    if (temp != s.size())
    {
        cout << "Invalid";
    }
    else cout << "Valid";
	

   

}