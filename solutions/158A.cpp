#include <iostream>
using namespace std;

int main()
{
	int n, k, p, ans = 0;
	cin >> n >> k;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> p;
		arr[i] = p;
	}
	for (int i = 0; i < n; i++) {
		if(arr[i] != 0) {
			if(arr[i] >= arr[k - 1]) {
				ans++;
			}
		}
	}
	cout << ans;
	return 0;
}