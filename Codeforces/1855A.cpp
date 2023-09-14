#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // took both hints from editorial but at that point it was just the solution anyways

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int unhappy_students = 0;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (j + 1 == x) {
                unhappy_students++;
            }
        }
        int min_operations = (unhappy_students / 2) + (unhappy_students % 2);
        cout << min_operations << '\n';
    }
}