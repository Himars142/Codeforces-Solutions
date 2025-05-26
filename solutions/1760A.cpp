#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << min(min(max(a, b), max(b, c)), max(a, c)) << endl;
    }
    return 0;
    
}