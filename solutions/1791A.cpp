#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    string cf = "codeforces";
    char c;
    cin >> n;
    while(n--) {
        cin >> c;
        if(cf.find(c) != string::npos) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    return 0;
}