#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int sum = 0;
        for (int j = 0; j < n - 1; j++) {
            int x; cin >> x;
            sum += x;
        }
        cout << -sum << endl;
    }
}