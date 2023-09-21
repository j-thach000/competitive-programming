#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> v;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            v.push_back(x);
        }
        // if a digit is 9 then adding 1 turns it into 0
        // find the smallest digit and add 1
        // whatever becomes 0 ideally is on the farthest right
        vector<int>::iterator result = std::min_element(v.begin(), v.end());
        int min = *result;
        int min_index = distance(v.begin(), result);
        for (int j = 0; j < n; j++) {
            if (j == min_index && v[j] == min) {
                if (v[j] == 9) {
                    v[j] = 10;
                }
                else {
                    v[j]++;
                }
            }
        } 
        int product = 1;
        for (int j = 0; j < n; j++) {
            product *= v[j];
        }
        cout << product << endl;
    }
}