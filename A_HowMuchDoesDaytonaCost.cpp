#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (k == a[i])
                count++;
        }
        if (count == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}