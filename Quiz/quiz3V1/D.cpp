#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    vector<string> v;
    int n;
    cin >> n;
    string s;

    for(int i = 0; i < n; i++)
    {
        cin >> s;
        v.push_back(s);
    }

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        if(find(v.begin(), v.end(),s) != v.end()){
       cout << s << endl;
    }
    }

}