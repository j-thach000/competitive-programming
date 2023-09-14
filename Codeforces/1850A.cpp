#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        vector<int> v;
        for (int j = 0; j < 3; j++) {
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        if (v[1] + v[2] >= 10) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}