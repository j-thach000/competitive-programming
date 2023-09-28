#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // the 200,000th prime numer is 399,999, WAs/runtime errors came from the loop being set to m < 200,000
    vector<int> v;
    for (int m = 1; m < 500000; m += 2) {
        v.push_back(m);
        cout << v[m] << endl;
    }

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        copy(v.begin(), v.begin() + n, ostream_iterator<int>(cout, " "));
        cout << endl;
    }
}