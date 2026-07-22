#include <iostream>
#include <set>
using namespace std;

int main()
{
    int x;
    cin >> x;

    while (x--)
    {
        int n;
        cin >> n;

        set<int> s;

        for (int i = 0; i < n; i++)
        {
            int y;
            cin >> y;
            s.insert(y);
        }

        int ans = -1;

        for (int k = 1; k <= 1023; k++)
        {
            bool possible = true;

            for (int t : s)
            {
                int p = t ^ k;
                if (s.find(p) == s.end())
                {
                    possible = false;
                    break;
                }
            }

            if (possible)
            {
                ans = k;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}