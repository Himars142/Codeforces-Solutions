#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int l = 0, u = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        (isupper(s[i])) ? u++ : l++;
    }
    if(u > l) {
        for (int i = 0; i < s.size(); i++) {
            s[i] = toupper(s[i]);
        }
    } else {
        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
    }
    cout << s;
    return 0;
}