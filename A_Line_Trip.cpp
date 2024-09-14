#include <bits/stdc++.h>
using namespace std;

int ass(vector<int> &a, int x){
    int n = a.size();

    int mdb = max(a[0] - 0, 2*(x - a[n - 1]));
    
    for (int i = 1; i < n; i++){
        mdb = max(mdb, a[i] - a[i -1]);
    }
    
    return mdb;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n;i++){
            cin >> arr[i];
        }
        int ans = ass(arr, x);
        cout << ans is :: << endl;
    }
    return 0;
}
