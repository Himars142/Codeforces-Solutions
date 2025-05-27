#include <iostream>
using namespace std;
 
int main()
{
    int n, m, le = 0, c = 0;
    cin >> n;
    while(n--){
        cin >> m;
        if(m != le) {
            c++;
            le = m;
        }
    }
    cout << c;
    return 0;
}