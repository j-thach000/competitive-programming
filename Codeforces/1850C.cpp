#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        char a[8][8];
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                cin >> a[j][k]; 
            }
        }
        string ans = "";
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 8; k++) {
                if (isalpha(a[j][k]) > 0) {
                    ans += a[j][k];
                }
            }
        }  
        cout << ans << endl; 
    }
}