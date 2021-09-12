#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		string s;
		cin >> s;
		string pattern1 = "";
		string pattern2 = "";
		// create the two (2) valid string sequences
		for (int i = 0; i < (int) s.size(); i++) {
			if ((i + 1) % 2 == 0) {
				pattern1 += string(1, '+');
				pattern2 += string(1, '-');
			} else {
				pattern1 += string(1, '-');
				pattern2 += string(1, '+');
			}
		}
		// find the minimum number of replacements that can be done
		// between following the first pattern and the second pattern
		int cnt1 = 0;
		int cnt2 = 0;
		for (int i = 0; i < (int) s.size(); i++) {
			if (s[i] != pattern1[i]) {
				cnt1++;
			}
			if (s[i] != pattern2[i]) {
				cnt2++;
			}
		}
		cout << min(cnt1, cnt2) << '\n';
	}
	return 0;
}
