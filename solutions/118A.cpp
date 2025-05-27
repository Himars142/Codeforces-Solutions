#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    s.erase(remove_if(s.begin(), s.end(), [](char c) {
        return c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i';
    }), s.end());
    for (char c : s) {
        cout << '.' << c;
    }
    return 0;
}