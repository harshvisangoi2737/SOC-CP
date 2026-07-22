#include <iostream>
using namespace std;

const long long MOD = 1000000007;

long long power(long long a, long long b) {
    long long ans = 1;
    while (b > 0) {
        if (b % 2)
            ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b /= 2;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n == 1) {
            cout << 1 << endl;
        }
        else {
            cout << power((power(2, n - 1) - 1 + MOD) % MOD, k) << endl;
        }
    }

    return 0;
}