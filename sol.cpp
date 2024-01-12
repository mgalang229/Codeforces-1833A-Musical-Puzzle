#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	string s;
	cin >> n >> s;
	set<string> st;
	for (int i = 0; i < n - 1; i++)
		st.insert(string(1, s[i]) + string(1, s[i+1]));
	cout << st.size() << "\n";
}

int main() {
	int t = 1;
	cin >> t;
	while (t--)
		solve();
}
