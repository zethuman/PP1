#include <iostream>
#include <map>

using namespace std;


int main()
{
    map<int, int> m;
    int n, x;
    cin >> n;

    for(int i = 0; i < n; i++){

        cin >> x;
        int summa = 0;
        summa++;
        m[summa]=x;
    }
    
    int max = 0;
     map<int, int> :: iterator it;

     for(it = m.begin(); it != m.end(); it++)

        cout<<it->second;

}
        

