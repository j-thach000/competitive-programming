#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    string ref = "codeforces";
    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        int diff = 0;
        for (int j = 0; j < 10; j++) {
            if (s[j] != ref[j]) {
                diff++;
            }
        }
        cout << diff << endl;
    }
}