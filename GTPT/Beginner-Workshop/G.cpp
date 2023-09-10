#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // complete
    // 1. all positive elements
    // 2. all elements <= 1000 
    // 3. no 2 elements add up to another element in the array
    // *elements don't have to be distinct

    // find an array fulfilling these conditions with length n (given)

    // pre compute an array of 1000 that's complete and then print an array of the first n elements
    /*
        int complete[1000] = {1,2,4};
    for (int i = 3; i < 1000; i++) {
        complete[i] = complete[i - 1] + 3;
    }
    for (int i = 0; i < 1000; i++) cout << complete[i] << '\n';
    */
    
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int a[n];
        for (int j = 0; j < n; j++) a[j] = 1;
        for (int k = 0; k < n; k++) cout << a[k] << ' ';
        cout << '\n';
    }
}