#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int a;
        cin >> a;
        int b;
        cin >> b;
        if ((a + b) % 2 == 1) {
            cout << "Alice" << endl;
        }
        else {
            cout << "Bob" << endl;
        }
    }
}