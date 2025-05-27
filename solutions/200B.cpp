#include <iostream>
using namespace std;

int main()
{
    int n, p, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p;
        sum += p;
    }
    double rs;
    rs = (double)sum / n;
    cout << rs;

    return 0;
}