#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            v.push_back(x);
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        for (int j = 0; j < n; j++) {
            int res = sum - v.at(j);
            if (v.at(j) % 2 == 0 and res % 2 == 0) {
                cout << "YES\n";
            }
            else if (v.at(j) % 2 == 1 and res % 2 == 1) {
                cout << "YES\n";
            }
            else {
                cout << "NO\n";
            }
            break;
        }
    }
}