#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    // x and y are distinct, l <= x < y <= r
    // LCM of x and y can be either l or r or between

    // x = l
    // y = r decremented to the point where (r % l == 0) otherwise x = -1 y = -1
    // lol just subtract the result of r % l from r 

    for (int i = 0; i < t; i++) {
        int l; cin >> l; int r; cin >> r;
        int x = l; int y = r - (r % l);
        if (x != y) cout << x << " " << y << '\n';
        else cout << "-1 -1\n";
    }
}