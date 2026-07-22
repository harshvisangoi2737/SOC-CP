#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<pair<long long, int>> fact;

        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                int cnt = 0;

                while (n % i == 0)
                {
                    cnt++;
                    n /= i;
                }

                fact.push_back({i, cnt});
            }
        }

        if (n > 1)
        {
            fact.push_back({n, 1});
        }

        long long ans = 0;

        while (true)
        {
            long long curr = 1;
            bool found = false;

            for (int i = 0; i < fact.size(); i++)
            {
                if (fact[i].second > 0)
                {
                    curr *= fact[i].first;
                    fact[i].second--;
                    found = true;
                }
            }

            if (!found)
                break;

            ans += curr;
        }

        cout << ans << endl;
    }

    return 0;
}