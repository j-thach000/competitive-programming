#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> a;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            a.push_back(x);
        }
        vector<int> b = a;
        bool parity_maintained = true;
        sort(b.begin(), b.end());
        for (int j = 0; j < n; j++) {
            if (a[j] % 2 != b[j] % 2) {
                parity_maintained = false;
                break;
            }
        }
        if (!parity_maintained) {
            cout << "NO\n";
        }
        else{
            cout << "YES\n";
        }
    }
}