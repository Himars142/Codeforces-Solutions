#include <iostream>
using namespace std;

int main() {
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    x == 0 && y == 0 && z == 0 ? cout << "YES" : cout << "NO";
}