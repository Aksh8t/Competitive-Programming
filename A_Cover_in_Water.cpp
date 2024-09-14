#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (str[i] == '.') {
                int sax = 0;
                while(i < n && str[i] == '.') {
                    sax++;
                    i++;
                }
                if (sax >= 3) {
                    count = 2;
                    break;
                } 
                else {
                    count += sax;
                }
                i--;
            }
        }
        cout << count << endl;
    }
    return 0;
}
