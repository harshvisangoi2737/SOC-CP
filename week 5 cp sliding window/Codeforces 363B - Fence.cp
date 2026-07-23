#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    int mini = sum;
    int ans = 1;

    for (int i = k; i < n; i++) {
        sum += a[i];
        sum -= a[i - k];

        if (sum < mini) {
            mini = sum;
            ans = i - k + 2;
        }
    }

    cout << ans;

    return 0;
}