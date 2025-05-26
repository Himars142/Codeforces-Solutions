#include <iostream>
using namespace std;

int main()
{
	int t, a, b, c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> a >>  b >> c;
		cout << ((a + b >= 10 || b + c >= 10 || a + c >= 10) ? "YES" : "NO") << endl;

	}
	return 0;
}