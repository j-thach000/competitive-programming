#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        // check parity
        string s; cin >> s; // wasted basically an hour debugging because i thought input was chars and not a string
        set<char> odd;
        set<char> even;
        bool broken_parity = false;
        for (int j = 0; j < n; j++) {
            if (j % 2 == 0) {
                even.insert(s[j]);
                if (odd.contains(s[j]) == 1) {
                    broken_parity = true;
                }
            }
            else {
                odd.insert(s[j]);
                if (even.contains(s[j]) == 1) {
                    broken_parity = true;
                }                
            }
        }
        if (broken_parity) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }
}