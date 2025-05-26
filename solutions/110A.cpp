#include <iostream>
using namespace std;
 
int main() {
    int l = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if(s[i] == '7' || s[i] == '4') {
		    l++;
		}
	}
	cout << ((l == 7 || l == 4) ? "YES" : "NO");
	return 0;
}