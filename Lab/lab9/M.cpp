#include <cstdlib>
#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<queue>
//freopen("input.txt", "r", stdin);
using namespace std;

queue<string> q;

int main()
{
    int n,x;
        string str;
            cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x ;
            
            if(x == 1)
            {
                cin >> str;
                    q.push(str);
                        cout << q.front() << endl;
            }

    if(x == 2)
    {
        q.pop();
            if(q.empty() == true)
                cout << "queue is empty" << endl;
                    else cout << q.front() << endl;
        
    }
    }
}	