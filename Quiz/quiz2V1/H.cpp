#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    string s;
    cin >> s;
    int p = 0;
    

    for (int i =0; i < s.size(); i++)
    {
        if ( s[i] == 'r')
        {
            if (s[i + 1] == 'g')
            {
                if (s[i + 2] == 'b')
                {
                    p++;
                }
            }
        }
    }
    cout << p;
}

