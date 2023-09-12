#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // append the min of a to b and then the rest into c

    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        vector<int> a;
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end()); 
        vector<int> b;
        vector<int> c;
        b.push_back(*min_element(a.begin(), a.end())); // pointing to the min?
        for (int j = 1; j < n; j++) {
            if (a.at(j) == b.at(0)) {
                b.push_back(b.at(0));
            }
            else {
                c.push_back(a.at(j));
            } 
        }
        if (c.size() == 0) {
            cout << "-1" << '\n';
        }
        else {
            cout << b.size() << " " << c.size() << '\n';
            for (int num : b) 
                cout << num << " ";
            cout << '\n';
            for (int num : c)
                cout << num << " ";
            cout << '\n';
        }
    }
}