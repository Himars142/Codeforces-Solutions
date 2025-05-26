#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t, r_s;
    cin >> s >> t;
    r_s = string(s.rbegin(), s.rend());
    cout << ((t == r_s) ? "YES" : "NO");
    return 0;
}