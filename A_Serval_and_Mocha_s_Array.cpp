#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define neg1 cout << -1 << nl

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;

long gcd(long a, long b)
{
    while (b)
    {
        long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        // Your logic here
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool pus = false;
        for (long p = 0; p < n && !pus; p++)
        {
            for (long q = p + 1; q < n && !pus; q++)
            {
                if (gcd(a[p], a[q]) <= 2)
                {
                    pus = true;
                }
            }
        }
        puts(pus ? "Yes" : "No");
    }
}