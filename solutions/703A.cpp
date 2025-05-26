#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, m, cw = 0, mw = 0; cin >> n;
    while(n--) {
        cin >> m >> c;
        if(c > m) {
            cw++;
        }
        if(c < m) {
            mw++;
        }
    }
    if(cw == mw) {
        cout << "Friendship is magic!^^";
    } else {
        cout << ((cw > mw) ? "Chris" : "Mishka");
    }
    
    
    return 0;
}