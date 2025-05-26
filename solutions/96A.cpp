#include <iostream>
using namespace std;

int main() {
    int zc = 0, oc = 0;
    string s;
    cin >> s;
    
	for (int i = 0; i < s.size(); i++) {
	    if(s[i] == '1') {
	        oc += 1;
	        zc = 0;
	    } else {
	        zc += 1;
	        oc = 0;
	    }
	    if(zc >= 7 || oc >= 7) {
	        cout << "YES";
	        return 0;
	    }
	}
	cout << "NO";
	return 0;
}