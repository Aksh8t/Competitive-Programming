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
    ll t;
    t = 1;

    while (t--)
    {
        // Your logic here
        ll n;
        cin >> n;

        ll x = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            ll j;
            cin >> j;
            if (j == 0)
            {
                x = 0;
                break;
            }

            x = min(x, abs(j));
        }
        cout << x << nl;
    }

    return 0;
}