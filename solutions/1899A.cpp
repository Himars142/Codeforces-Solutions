#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n; cin >> t;
    while(t--) {
        cin >> n;
        cout << ((n % 3 == 0) ? "Second" : "First") << "\n";
    }
    return 0;
}