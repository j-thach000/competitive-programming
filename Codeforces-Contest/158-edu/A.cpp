#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // min gas tank capacity needed to travel from point x and back to point 0
    // find the max distance between a point and gas station
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n; // number of gas stations
        cin >> n;
        int x; // destination point
        cin >> x;
        
        int a[n]; // gas station locations on number line
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int max_dist = a[0];
        for (int i = 1; i < n; i++) {
            max_dist = max(max_dist, a[i] - a[i-1]);
        } 
        // check case of returning
        max_dist = max(max_dist, ((x - a[n-1])) * 2);

        cout << max_dist << endl;

        /*
        OK
        case: 5 -> 7 and 7 -> 5
        greatest distance to a gas station
        0 1 2 3 4 5 6 7
          x x     x

        OK
        0 1 2 3 4 5 6
          x x     x

        OK
        0 1 2 3 4 5 6 7 8 9 10
                      x
        */
    }
}