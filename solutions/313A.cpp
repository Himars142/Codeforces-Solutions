#include <iostream> 
using namespace std;

int main() {
    int n, MAX;
    cin >> n;
    MAX = n;
    if(n/10 > MAX) {
        MAX /= 10;
    }
    if(n%10 + (n/100) * 10 > MAX) {
        MAX = n%10 + (n/100) * 10;
    }
    cout << MAX;
}