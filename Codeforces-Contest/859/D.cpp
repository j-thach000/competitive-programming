#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        // went off the rails, this is solvable with a formula but panicked 
        int n, q; cin >> n >> q;
        vector<int> v;
        // take in array to perform queries
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            v.push_back(x);
        }
        // perform queries
        for (int j = 0; j < q; j++) {
            vector<int> v_copy = v;
            // take in left to right range, and element k to replace the range
            int l, r, k; cin >> l >> r >> k;
            for (int z = l - 1; z < r - 1; z++) {
                v_copy[z] = k;
            }
            accumulate(v_copy.begin(), v_copy.end(), 0);
        }
    }
}