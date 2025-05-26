#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
            cout << "I hate it ";
    } else {
        cout << "I hate that ";
        for(int i = 2; i <= n; i++) {
            if (i % 2 == 0) {
                if(i == n) {
                    cout << "I love it ";
                } else {
                    cout << "I love that ";
                }
            } else if(i == n) {
                cout << "I hate it ";
            } else {
                cout << "I hate that ";
            }
            
        }
    }
}