#include <iostream>
using namespace std;
 
int main()
{
    int t;
    char x, y, z;
    cin >> t;
    for (int i = 0; i < t * 3; i++) {
        cin >> x >> y >> z;
        if(x == '?') {
            if(y == 'A' && z == 'B' || z == 'A' && y == 'B') {
                cout << 'C' << "\n";
            }
            if(y == 'A' && z == 'C' || z == 'A' && y == 'C') {
                cout << 'B' << "\n";
            }
            if(y == 'B' && z == 'C' || z == 'B' && y == 'C') {
                cout << 'A' << "\n";
            }
        }
        if(y == '?') {
            if(x == 'A' && z == 'B' || z == 'A' && x == 'B') {
                cout << 'C' << "\n";
            }
            if(x == 'A' && z == 'C' || z == 'A' && x == 'C') {
                cout << 'B' << "\n";
            }
            if(x == 'B' && z == 'C' || z == 'B' && x == 'C') {
                cout << 'A' << "\n";
            }
        }
        if(z == '?') {
            if(y == 'A' && x == 'B' || x == 'A' && y == 'B') {
                cout << 'C' << "\n";
            }
            if(y == 'A' && x == 'C' || x == 'A' && y == 'C') {
                cout << 'B' << "\n";
            }
            if(y == 'B' && x == 'C' || x == 'B' && y == 'C') {
                cout << 'A' << "\n";
            }
        }
    }
    return 0;
}