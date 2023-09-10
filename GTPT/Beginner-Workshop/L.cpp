#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // even amount of even and odd elements lets them be paired off (odd numbers mod 2 always have remainder 1)
    int t; cin >> t; // test cases
    for (int i = 0; i < t; i++) {
        int n; cin >> n; // len of test cases, guaranteed even
        int a[n];
        // count even numbers
        int count_even = 0;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            if (a[j] % 2 == 0) count_even++;
        }
        if (count_even % 2 == 0) cout << "YES\n";
        else {
            // is there min at least one pair with diff 1, sort with the smallest values at the beginning
            sort(a,a+n);
            // create boolean var and just check at the end if we found a dig
            bool flag = false;
            for (int i = 1; i < n; i++) if ((a[i] - a[i-1] == 1)) flag = true;
            if (flag) cout << "YES\n";
            else cout << "NO\n";
        }
    }

}