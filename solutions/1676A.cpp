#include <iostream>
using namespace std;

int main()
{
    int t, sum1, sum2;
    cin >> t;
    while(t--) {
        sum1 = 0;
        sum2 = 0;
        char c;
        for (int i = 0; i < 3; i++) {
            cin >> c;
            int num = c - '0';
            sum1 += num;
        }
        for (int i = 0; i < 3; i++) {
            cin >> c;
            int num = c - '0';
            sum2 += num;
        }
        cout << ((sum1 == sum2) ? "YES\n" : "NO\n");
    }
    return 0;
}