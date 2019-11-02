#include<iostream>
#include<map>

using namespace std;

int main()
{
    int cnt = 0;
    string s;
    freopen("input.txt", "r", stdin);
    while(cin >> s)
    {
       
        
            if(s[0] == 'a')
            {
                cnt += 1;
            }
        

    }
    cout << cnt;
}