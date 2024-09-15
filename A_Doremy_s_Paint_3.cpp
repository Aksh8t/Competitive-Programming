#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
			ll n;
	cin >> n;

	map<ll, ll> arr;
	for(ll i = 0, x; i < n; i++) {
		cin >> x;
		arr[x]++;
	}

	if(arr.size() > 2) {
		cout << "No\n";
	} 
    else if(arr.size() == 1) {
		cout << "Yes\n";
	}
    else {
		auto it = arr.begin();
		ll f1 = it->second, f2 = (++it)->second;
		cout << (abs(f1 - f2) <= 1 ? "Yes\n" : "No\n");
	}
}
}
