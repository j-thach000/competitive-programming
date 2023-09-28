#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        set<int> s;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            s.insert(x);
        }
        if (s.contains(k)) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}