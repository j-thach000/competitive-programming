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
        int odds = 0;
        int sum_odds = 0;
        int evens = 0;
        int sum_evens = 0;
        
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            v.push_back(x);
            if (v[j] % 2 == 0) {
                evens++;
                sum_evens += v[j];
            }
            else {
                odds++;
                sum_odds += v[j];
            }
        }

        if (sum_evens > sum_odds)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}