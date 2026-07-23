#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;

    vector<int> books(n);

    for (int i = 0; i < n; i++)
    {
        cin >> books[i];
    }

    int left = 0;
    long long sum = 0;
    int ans = 0;

    for (int right = 0; right < n; right++)
    {
        sum += books[right];

        while (sum > t)
        {
            sum -= books[left];
            left++;
        }

        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;

    return 0;
}