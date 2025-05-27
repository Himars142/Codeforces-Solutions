#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, b;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> b;
        arr[i] = b;
    }
    sort(arr.begin(), arr.end());
    for (int number : arr) {
        cout << number << " ";
    }
    return 0;
}