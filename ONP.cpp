#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t, x, i, k;
	string out, s;
	map<char, ll>mp;
	mp['+'] = 1;
	mp['-'] = 2;
	mp['*'] = 3;
	mp['/'] = 4;
	mp['^'] = 5;

	stack<char>st;

	cin >> t;
	while (t--) {
		k = 0, out = "";
		cin >> s;
		for (i = 0; i < s.size(); i++)
		{
			if (s[i] >= 'a' && s[i] <= 'z')out.push_back(s[i]);
			else if (s[i] == '(')st.push(s[i]);
			else if (s[i] == ')')
			{
				while (!st.empty() && st.top() != '(') {
					out.push_back(st.top());
					st.pop();
				} st.pop();
			}
			else {
				while (!st.empty() && st.top() != '(' && mp[st.top() > mp[s[i]]]) {
					out.push_back(st.top());
					st.pop();
				}
				st.push(s[i]);
			}
		}
		while (!st.empty()) {
			out.push_back(st.top());
			st.pop();
		}
		cout << out << endl;

	}
}
