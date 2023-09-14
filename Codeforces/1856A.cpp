#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // if there's occurrences of pairs of unsorted numbers ie a1 > a2, the pair with the largest a1 is the min operations
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int max_diff = 0;
        vector<int> v;
        
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            v.push_back(x);
        }
        for (int j = 1; j < n; j++) {
            if (v.at(j - 1) > v.at(j)) {
                max_diff = max(max_diff, v.at(j-1));
            }
        }
        cout << max_diff << '\n';
    }
}