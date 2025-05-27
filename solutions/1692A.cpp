#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, a, b, c, d, count;
    cin >> n;
    while(n--) {
        count = 0;
        cin >> a >> b >> c >> d;
        if(a < b) {
            count++;
        } 
        if(a < c) {
            count++;
        } 
        if(a < d) {
            count++;
        }
        cout << count << "\n";
    }
    return 0;
}