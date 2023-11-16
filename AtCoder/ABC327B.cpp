#include "bits/stdc++.h"

/*
[takeaway]
looked at editorial
1. bound the problem, ie 15 x 15 gets us close to the limit of 10^18
2. actual brain issue with thinking of an implementation of repeating multiplication over and over
*/

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long B;
    cin >> B;
    // some number A
    for (int A = 1; A <= 15; A++) {
        long long x = 1;
        // multiplying it A times
        for (int i = 0; i < A; i++) {
            x *= A;
        }
        if (x == B) {
            cout << A << endl;
            exit(0);
        }
    }
    cout << "-1" << endl;
}