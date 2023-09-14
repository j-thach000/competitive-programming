#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // throw test case input into a set, sort
    // iterate from i = 0 to max of the set and return when i is not present or n + 1, case: [0,n] is present

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        // cases
        // 0: count of zeroes is less than half of n (every 0 is paired off)
        // 1: a is entirely comprised of 0s, some input >= 2 (from prev 2 facts) 
        // 2: only 0s and 1s left (no element >= 2), more 0s than 1s, forced 2s 
        int count_zeroes = 0;
        bool num_greater_than_equal_two = false;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (x == 0) {
                count_zeroes++;
            }
            else if (x >= 2) {
                num_greater_than_equal_two = true;
            }    
        }

        if (count_zeroes <= (n+1) / 2) {
            cout << "0\n";
        }
        else if (num_greater_than_equal_two || count_zeroes == n) {
            cout << "1\n";
        }
        else {
            cout << "2\n";
        }
    }
}