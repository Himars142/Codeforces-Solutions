#include <iostream>
using namespace std;
 
int main()
{
    int a, b, r = 0;
    cin >> a >> b;
    r = (max(a, b) - min(a, b))/2;
    cout << min(a, b) << " " << ((r > 0) ? r : 0);
    return 0;
}