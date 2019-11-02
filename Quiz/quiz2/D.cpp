#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int temp = 0 ;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '3')
        {
            if (s[i + 1] == '7')
            {
                if (s[i + 2] == '5')
                {
                    temp = temp + 1;
                    
                }

    }

}
    }
    cout << temp;
}
