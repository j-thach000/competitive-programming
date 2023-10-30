#include "bits/stdc++.h"

using namespace std;

void solve() {
    int powers_of_two[11] = {1,2,4,8,16,32,64,128,256,512,1024};
    int n; cin >> n;
    // index starts at 1
    // how do we choose m? 2^m has to be <= n, the size of the input array
    // 1) 2^m <= n
            // m dictates the indices that we can decrememt by 1
            // 2^0 = 1
            // 2^1 = 2
            // 2^2 = 4
            // 2^3 = 8
    // pattern: if the element is unordered (greater than the next element) and a power of 2 then the answer is yes, and consider the m constraint
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool sortable = true;
    for (int i = 0; i < n-1; i++) {
        if (a[i] > a[i+1]) {
            for (int j = 0; j < 11; j++) {
                if (i+1 == powers_of_two[j]) {
                    sortable = true;
                    break;
                }
                else {  
                    sortable = false;
                }
            }
        }
    }
    if (sortable) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}