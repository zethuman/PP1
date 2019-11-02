#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
    string s;
    int counter;
 

    while (getline(cin,s))
    {
       counter = count (s.begin(), s.end(), ' ');

        cout << counter + 1;

        break;
    }

 

}
