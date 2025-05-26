#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        cout << s1[0] << s2[0] <<  s3[0] << endl;
    }
    return 0;
}