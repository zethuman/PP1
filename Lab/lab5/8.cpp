#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    setlocale( LC_ALL,"" );
    vector<char> vec(0);
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
        for(int j=0;j<str.length();j++)
    if(i!=j && str[i]==str[j]) { vec.insert(vec.end(),str[i]); }
    }
    if(vec.size()==2)  cout << vec[0];
   
  
    return 0;
}