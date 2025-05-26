#include <iostream>
using namespace std;

int main() {
    long long n, r;
    cin >> n;
    r = (n % 2 == 0) ? n/2 : -(n/2+1);
    cout << r;
}