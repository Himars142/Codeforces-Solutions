#include <iostream>
using namespace std;

int main() {
    int k, r;
    int i = 1;
    cin >> k >> r;
    bool found = false;
        while (found == false)
        {
            if((k * i - r) % 10 == 0) {
                found = true;
                cout << i;
            }
            if((k * i) % 10 == 0) {
                found = true;
                cout << i;
            }
            i++;
        }
    return 0;
}