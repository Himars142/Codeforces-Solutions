#include <iostream>
using namespace std;
 
int main()
{
    int t, rating;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> rating;
        if(rating >= 1600) {
            cout << ((rating >= 1900) ? "Division 1" : "Division 2" ) << '\n';
        } else {
            cout << ((rating <= 1399) ? "Division 4" : "Division 3" ) << '\n';
        }
    }
    return 0;
}