#include "bits/stdc++.h"

using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long low = 0;
    long long high = 2'000'000'007;
    while (high - low > 1) { // if the diff is > 1 then there's still possible heights to search
        long long mid = (high + low) / 2;
        long long total_sum = 0;
        for (int i = 0; i < n; i++) {
            total_sum += max(mid - a[i], 0LL);
        }
        if (total_sum <= x) {
            low = mid;
        }
        else {
            high = mid;
        }
    }
    cout << low << endl;
}

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}