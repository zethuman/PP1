#include <bits/stdc++.h>

#include <sstream>

using namespace std;

int main() {
	int n, mx = 0;
	string s, ans;
	cin>>n;
	getline(cin, s);	
	for(int i=0; i<n; i++){
		getline(cin, s);
		string num;
		int x;
		for(int j=s.size()-1; j>=0; j--)
		{
			if(s[j] == ' ') break;
			num += s[j];
		}
		reverse(num.begin(), num.end());
		stringstream ss;
		ss << num;
		ss >> x;
		if(x >= mx)
		{
			mx = x;
			ans = s;
		}
	}

	cout << ans;
}