#include <iostream>
#include <vector>
using namespace std;

const int MAX = 200000;

int main() {
    vector<bool> prime(MAX + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = false;
        }
    }

    vector<int> nextPrime(MAX + 1);

    int last = -1;
    for (int i = MAX; i >= 0; i--) {
        if (prime[i]) last = i;
        nextPrime[i] = last;
    }

    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    int ans = 1e9;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < m; j++)
            sum += nextPrime[a[i][j]] - a[i][j];
        ans = min(ans, sum);
    }

    for (int j = 0; j < m; j++) {
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += nextPrime[a[i][j]] - a[i][j];
        ans = min(ans, sum);
    }

    cout << ans << endl;

    return 0;
}