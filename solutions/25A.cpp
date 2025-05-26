#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, v, odd = 0, oddValue = 0, even = 0, evenValue = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> v;
        if(v % 2 == 0) {
            even++;
            evenValue = i;
        } else {
            odd++;
            oddValue = i;
        }
    }
    cout << ((odd > even) ? evenValue : oddValue);
    
    return 0;
}