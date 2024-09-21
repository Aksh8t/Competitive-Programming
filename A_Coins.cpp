#define nl endl
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define neg1 cout << -1 << nl

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using pii = pair<int, int>;


int main() {

     long t; scanf("%ld", &t);
  while (t--) {
    long long n, k; scanf("%lld %lld", &n, &k);
    bool res = (n % 2 == 0) || ((n - k) % 2 == 0); 
    puts(res ? "YES" : "NO");
  }

    return 0;
}