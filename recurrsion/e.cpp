#include <iostream>
using namespace std;
 
void binary(long long n) {
    if (n == 0)
        return;
 
    binary(n / 2);
    cout << n % 2 ;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (n == 0)
            cout << 0;
        else
            binary(n);
 
        cout << endl;
    }
 
    return 0;
}