#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        long long a, b;
        cin >> a >> b;
        if (a > b) {
            // now dividing a / b because of the swap
            swap(a,b);
        }
        long long div = b / a;
        int ans = 0;
        while (div % 2 == 0 && div >= 2) { // div is minimum 2 to even perform an operation
            div /= 2;
            ans++;
        }
        if (div == 1 && b % a == 0) {
            cout << (ans + 2) / 3 << '\n';
        } 
        else {
            cout << -1 << '\n';
        }
    }
}