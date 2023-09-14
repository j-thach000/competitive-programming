#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int a, b, c; cin >> a >> b >> c;
        long long sum = a + b + c;

        if (sum % 2 == 0) {
            if (a > b) {
                cout << "First\n";
            }
            else {
                cout << "Second\n";
            }
        }
        else {
            if (b > a) {
                cout << "Second\n";
            }
            else {
                cout << "First\n";
            }
        }
    }
}