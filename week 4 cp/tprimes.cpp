#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX = 1000000;

int main() {
    vector<bool> prime(MAX + 1, true);
    prime[0] = prime[1] = false;

    for (int i = 2; i * i <= MAX; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAX; j += i)
                prime[j] = false;
        }
    }

    int n;
    cin >> n;

    while (n--) {
        long long x;
        cin >> x;

        long long r = sqrt(x);

        if (r * r == x && prime[r])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}