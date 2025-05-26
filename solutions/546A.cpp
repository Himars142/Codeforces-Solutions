#include <iostream>
using namespace std;

int main() {
    int k, n, i;
    cin >> k >> n >> i;
    cout << max(0, ((k * i * (i + 1))/2-n));
    return 0;
}