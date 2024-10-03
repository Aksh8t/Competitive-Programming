#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define neg1 cout << -1 << nl

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        // Your logic here
        int n;
        cin >> n;
        vector<int> nums(n);
        int low = INT_MAX;
        bool sortcond = true;

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (i > 0)
            {
                low = min(low, nums[i] - nums[i - 1]);
                if (nums[i] < nums[i - 1])
                {
                    sortcond = false;
                }
            }
        }

        if (!sortcond)
        {
            cout << 0 << nl;
        }
        else
        {
            cout << (low / 2) + 1 << nl;
        }
    }

    return 0;
}