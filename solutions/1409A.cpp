#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long n, a, b;
    cin >> n;
    while(n--) {
        cin >> a >> b;
        cout << fixed << setprecision(0) << ceil(fabs(a - b) / 10) << "\n";
    }
    return 0;
}