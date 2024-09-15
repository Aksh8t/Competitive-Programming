#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
	ll n;
	cin >> n;

	map<ll, ll> freq;
	for(ll i = 0, x; i < n; i++) {
		cin >> x;
		freq[x]++;
	}

	if(freq.size() > 2) {
		cout << "No\n";
	} else if(freq.size() == 1) {
		cout << "Yes\n";
	} else {
		auto it = freq.begin();
		ll f1 = it->second, f2 = (++it)->second;
		cout << (abs(f1 - f2) <= 1 ? "Yes\n" : "No\n");
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
