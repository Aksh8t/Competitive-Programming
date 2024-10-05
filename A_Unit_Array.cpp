#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ng1 cout << -1 << nl

#include <bits/stdc++.h>
using namespace std;

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

        int arr[n];
        int ans = 0, ps = 0, ng = 0;

        sort(arr, arr + n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == -1)
                ng++;
            else
                ps++;
        }

        while (!((ps - ng) >= 0 && ng % 2 == 0))
        {
            ng--;
            ps++;
            ans++;
        }

        cout << ans << nl;
    }

    return 0;
}
