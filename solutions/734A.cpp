#include <iostream>
using namespace std;

int main() {
    int n, a = 0, d = 0;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < n; i++) {
        if(str[i] == 'A') {
            a++;
        } else {
            d++;
        }
    }
    if(a > d) {
        cout << "Anton";
    } else if (a == d) {
        cout << "Friendship";
    } else {
        cout << "Danik";
    }
}