#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	set<char> c;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
	    c.insert(s[i]);
	}
	cout << ((c.size() % 2 != 0) ? "IGNORE HIM!" : "CHAT WITH HER!");
}