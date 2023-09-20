#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n, m, k, H; cin >> n >> m >> k >> H;
        int a[n];
        int ans = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++) {
            // conditions
            // 1. vlad and the passenger can't have the same height
            // 2. height difference has to be divisible by k (if m is sufficient, this implies eventually they can talk)
            // 3. maxing out the height difference with the extreme ends of m is less than their height difference (m-1 * k)
            if (a[j] != H && abs(a[j] - H) % k == 0 && (m - 1) * k >= abs(a[j] - H)) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}