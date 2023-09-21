#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;
        // conjecture: 
        // test case 1: n = 6, k = 3, max_dist = 5, ans = 2
        // test case 2: n = 7, k = 3, max_dist = 3, ans = 1
        // test case 3: n = 5, k = 4, max_dist = 5, ans = 2
        // test case 4: n = 5, k = 5, ans = 1
        // test case 5: n = 8, k = 2, max_dist = 8, ans = 4 
        // test case 6: n = 10, k = 2, max_dist = 8, ans = 3 (B were paired up)
            // consecutive Bs?
        // test case 7: n = 4, k = 1, ans = 4
        // test case 8: n = 3, k = 2, ans = 0

        // min_dist * occurrence of Bs?
        // just simulate? 1D Eraser
        
        string s; cin >> s;
        int ans = 0;
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (s[j] == 'B') {
                count ++;
            }
        }
        if (count == 0) {
            cout << count << endl;
            continue;
        }
        int j = 0;
        while (j < n) {
            if (s[j] == 'B') {
                ans += 1;
                j += k;
            }
            else {
                j++;
            }
            
        }
        cout << ans << endl;
    }
}