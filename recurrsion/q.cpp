#include <iostream>
using namespace std;

int sequenceLength(long long n)
{
    if (n == 1)
        return 1;

    if (n % 2 == 0)
        return 1 + sequenceLength(n / 2);
    else
        return 1 + sequenceLength(3 * n + 1);
}

int main()
{
    long long n;
    cin >> n;

    cout << sequenceLength(n);

    return 0;
}