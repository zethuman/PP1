#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++)
    {
        if (s[i] == '8')
        {
            if(s[i + 1] == '7')
            {
                if(s[i + 2] == '1')
                {
                    cout << "Astana";break;
                }else cout << "Almaty";
            }
        }
    }

  
}

