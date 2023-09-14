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

        int min_diff = INT_MAX;
        bool unsorted = false;
        for (int j = 1; j < n; j++) {
            if (v[j - 1] <= v[j]) {
                min_diff = min(min_diff, abs(v[j - 1] - v[j]));
            }
            else {
                unsorted = true;
            }
        }

        if (unsorted) {
            cout << "0\n";
        }
        else {
            cout << (min_diff / 2) + 1 << '\n'; 
        }
    }
}