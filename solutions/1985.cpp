#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string a, b;
    for (int i = 0; i < t; i++) {
        cin >> a >> b;
        cout << b[0] << a[1] << a[2] << " " << a[0] << b[1] << b[2] << endl;
    }
    return 0;
}