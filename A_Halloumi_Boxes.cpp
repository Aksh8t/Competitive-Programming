#include <bits/stdc++.h>
using namespace std;

int Rev( vector<int> &num, int k){
    int n = num.size();
    if (k == 1) {
        vector<int> copy = num;
        sort(copy.begin(), copy.end());
        for (int i = 0; i < n; i++) {
            if (copy[i] != num[i]) {
                return false;
            }
        }
    }

    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> num(n);
        for (int i = 0; i < n; i++){
            cin >> num[i];
        } 
        if (Rev(num, k)) {
            cout << "YES"
                 << "\n";
        } else {
            cout << "NO"
                 << "\n";
        }
    }
        return 0;
}
