#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    int left = 0;
    int right = n - 1;

    int answer = 0;

    while (left < right)
    {
        int width = right - left;
        int h = min(height[left], height[right]);

        answer = max(answer, width * h);

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << answer << endl;

    return 0;
}