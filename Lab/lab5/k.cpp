#include <iostream>
#include <cstring>

using namespace std;

string s;


int main ()
{
    int temp = 0;

    cin >> s;


  for (int i = 0; i < s.size(); i++)
  {
      if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
      temp++;
  }

  cout << temp;
}


