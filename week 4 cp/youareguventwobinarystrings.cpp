#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string x, y;
        cin >> x >> y;

        int pos = -1;

        for (int i = y.size() - 1; i >= 0; i--) {
            if (y[i] == '1') {
                pos = i;
                break;
            }
        }

        int ans = 0;

        for (int i = x.size() - 1 - (y.size() - 1 - pos); i >= 0; i--) {
            if (x[i] == '1') {
                break;
            }
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}