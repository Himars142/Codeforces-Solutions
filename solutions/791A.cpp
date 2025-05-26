#include <iostream>
using namespace std;

int main() {
    int a, b;
    int years = 0;
    cin >> a >> b;
    if (a > b) {
        cout << 1;
    } else {
        while (a <= b) {
            a = a * 3;
            b = b * 2;
            years++;
        }
        cout << years;
    }
    return 0;
}