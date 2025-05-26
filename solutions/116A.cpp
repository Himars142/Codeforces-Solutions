#include <iostream>
using namespace std;
 
int main() {
    int n, a, b, max = 0, p = 0;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        p -= a;
        p += b;
        if(max < p) {
            max = p;
        }
    }
    cout << max;
	return 0;
}