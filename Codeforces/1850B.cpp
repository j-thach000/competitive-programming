#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int max_quality = 0;
        int ans = 0;
        for (int j = 0; j < n; j++) {
            // highest quality answer < 10
            int a, b; cin >> a >> b; // a length b quality
            if (b > max_quality && a <= 10) {
                max_quality = max(max_quality, b);
                ans = j + 1;
            }
        }
        cout << ans << endl;
    }
}