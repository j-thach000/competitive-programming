
#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // input is too large to implement process

    // feed input into array
    // find min diff of the array
    // plug into formula gotten from observing the pattern

    int t; cin >> t; // number of test cases    
    for (int rep = 0; rep< t; rep++) {
        int n; cin >> n;
        int a[n];
        // store case in array
        for (int i = 0; i < n; i++) cin >> a[i]; 
        
        // find min diff
        int diff = INT_MAX;
        for (int i = 1; i < n; i++) diff = min(diff,a[i] - a[i - 1]);
        if (diff < 0) cout << 0 << '\n'; 
        else cout << diff / 2 + 1 << '\n';
    }
}