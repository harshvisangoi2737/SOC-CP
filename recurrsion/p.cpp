#include <iostream>
using namespace std;

long long log2Rec(long long n)
{
    if (n == 1)
        return 0;
    return 1 + log2Rec(n / 2);
}

int main()
{
    long long n;
    cin >> n;

    cout << log2Rec(n);

    return 0;
}