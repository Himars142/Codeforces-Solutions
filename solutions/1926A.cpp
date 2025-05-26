#include <iostream>
using namespace std;

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--) {
        int a = 0, b = 0;
        cin >> s;
        for (int i = 0; i < 5; i++) {
            if(s[i] == 'A') {
                a++;
            } else {
                b++;
            }
        }
        cout << ((a > b) ? 'A' : 'B') << '\n';
    }
    return 0;
}