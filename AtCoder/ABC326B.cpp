#include "bits/stdc++.h"

/*
looked at editorial
had no idea what a good implementation of finding digits of a number would be
*/

using namespace std;

bool check(int n) {
    int digit_100s = n / 100;
    int digit_10s = (n / 10) % 10; 
    int digit_1s = n % 10;
    return (digit_100s * digit_10s == digit_1s);
}

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // check from n to 919
    int N; cin >> N;
    for (int i = N; i <= 919; i++) {
        if (check(i)) {
            cout << i << endl;
        break;
        }
    }
}