#include <iostream>
#include <iomanip>
using namespace std;

double sumArray(int a[], int n)
{
    if (n == 0)
        return 0;

    return a[n - 1] + sumArray(a, n - 1);
}

int main()
{
    int n;
    cin >> n;

    int a[100];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    double average = sumArray(a, n) / n;

    cout << fixed << setprecision(6) << average;

    return 0;
}