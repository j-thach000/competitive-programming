#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cin >> x;
    if (x == 2) {
        cout << "NO";
    }
    else if (x % 2 == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}