#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define neg1 cout << -1 << nl
#define sz(x) (int)(x).size()

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
        int n;
        cin >> n;
        int a[n - 1];
        int sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sum = -1 * sum;
        cout << sum << nl;
    }

    return 0;
}