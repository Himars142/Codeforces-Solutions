#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c, r = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a >> b >> c;
        if(a + b + c >= 2) {
            r++;
        }
        cout << endl;
    }
    cout << r;
    return 0;
}