#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // how do we get the 4 distinct positive integers (3 nearly prime, 1 filler from the difference which can be nearly prime)

    // find the 3 smallest nearly prime integers
    // flex fill the last

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int x; cin >> x;
        if (x <= 30) cout << "NO" << '\n';
        else {
            int fill = x - (6 + 10 + 14);
            if (fill == 6 || fill == 10 || fill == 14) cout << "YES" << '\n' << "6 10 15 " << fill - 1 << '\n' ;
            else cout << "YES" << '\n' << "6 10 14 " << fill << '\n' ;
        }
    }
}