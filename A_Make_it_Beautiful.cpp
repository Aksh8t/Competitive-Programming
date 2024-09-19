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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == arr[n - 1])
            cout << "NO" << nl;
        else
        {
            cout << "YES" << endl;
            cout << arr[n - 1] << " ";
            for (int i = 0; i < n - 1; ++i)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}