#include <iostream>
using namespace std;
 
int main()
{
    int n, x = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> s;
        if(s[0] == '+' || s[2] == '+') {
            x++;
        }
        if(s[0] == '-' || s[2] == '-') {
            x--;
        }
    }
    cout << x;
    
    return 0;
}