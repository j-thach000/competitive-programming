#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;

        long long a[n]; long long b[n];
        long long a_min = INFINITY;
        long long b_min = INFINITY;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            a_min = min(a_min, a[j]);
        }
        for (int j = 0; j < n; j++) {
            cin >> b[j];
            b_min = min(b_min, b[j]);
        }
        long long sum_a = 0;
        long long sum_b = 0;
 
        // sol is min of min_a + bj or min of min_b + aj
        for (int j = 0; j < n; j++) {
            sum_a += a_min + b[j];
            sum_b += b_min + a[j];
        }
        cout << min(sum_a,sum_b) << endl;
    }
}