#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int b, c, h; cin >> b >> c >> h;
        if (b == 2) {
            cout << '3' << endl;
            continue;
        }
        b -= 1; 
        int ans = 1; // one piece of bread already used for the top

        while (b > 0 and (c > 0 or h > 0)) {
            if (c > 0) {
                c--;
            }
            else if (h > 0) {
                h--;
            }
            b--;
            ans += 2;
        }
        cout << ans << endl;
    }
}