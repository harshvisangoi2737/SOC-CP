#include <iostream>
using namespace std;
 
void printDigits(long long n) {
    if (n == 0)
        return;
 
    printDigits(n / 10);
    cout << n % 10 << " ";
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
            printDigits(n);
 
        cout << endl;
    }
 
    return 0;
}