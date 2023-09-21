#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // assuming 2D array: index 0
    // 1 pt: i = 0 || i = 9 or i > 0 and i < 9, j == 0 or j == 9
    // 2 pt: i = 1 and j > 0 and j < 9
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int ans = 0;
        char a[10][10];
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                cin >> a[j][k];
                if (a[j][k] == 'X') {
                    if (j == 0 || j == 9) {
                        ans += 1;
                    }
                    else if ((j > 0 && j < 9) && k == 0 || k == 9) {
                        ans += 1;
                    }
                    else if ((j == 1 || j == 8) && k >= 1 && k <= 8) {
                        ans += 2;
                    }
                    else if ((j >= 2 && j <= 7) && k == 1 || k == 8) {
                        ans += 2;
                    }
                    else if ((j == 2 || j == 7) && k >= 2 && k <= 7) {
                        ans += 3;
                    }
                    else if ((j >= 3 && j <= 6) && k == 2 || k == 7) {
                        ans += 3;
                    }
                    else if ((j == 3 || j == 6) && k >= 3 && k <= 6) {
                        ans += 4;
                    }
                    else if ((j >= 4 and j <= 5) && k == 3 || k == 6) {
                        ans += 4;
                    }
                    else if ((j == 4 || j == 5) && k == 4 || k == 5) {
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}