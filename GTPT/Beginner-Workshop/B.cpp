#include "bits/stdc++.h"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    if (n % 3 == 0) {
        cout << (n/3) * 2 << "\n";
    }
    else {
        cout << (n/3) * 2 + 1 << "\n";
    }
}