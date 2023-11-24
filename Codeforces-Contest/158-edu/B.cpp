#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    // output is how many times chip has to be teleported, not total moves
    // basically traversing left to right increments all elements by 1

    /*
    tp = 2
    1 3 15 2 0
    1 1 1  1 0
    1 2 2  2 0 x
    1 3 3  2   x

    tp = max element - 1

    case: 0s?
    want: 1 1 1 1 1, tp = 0 if there were no 0s
    have: 1 0 1 0 1, tp = 2
        
        1 0 4 0 5
        tp = 0
        1 0 0 0 0
        1 0 1 0 1
        tp = 9

        1 1 0 4 3 2

        1 1 0 1 1 1 - 1
        1 1 0 2 2 2 - 2
        1 1 0 3 3 2 - 3
        1 1 0 4 3 2 - 4
        
        if zero, max element

        1 0 1 0 1, tp = 2

        1 0 1 0 1 0 1, tp = 3

        1 0 2 0 1 1 0 3 0 1, tp = 
         [     ]   [     ]

        1 0 14 0 3 4 5, tp = 14 + 5 = 19
            14   1 1 1
                 2 2 2
                 3 3 3
                   4 5
                     5

        1 15 2 0 27 8

        // problem boiling down to adding together the teleports from 0 segments?
        when we hit a 0 just reset the max and add our curr tp count?

        1 15 2   0   27 8
        max = 15     max = 27
        tp = 14 
    */
    for (int i = 0; i < t; i++) {
        int n; 
        cin >> n; // ribbon cells

        int a[n];
        int max_element = 0;
        int tp = 0;
        int zero_count = 0;
        bool zero_present = false;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 0) {
                zero_present = true;
            }
        }
        if (zero_present) {
            for (int i = 0; i < n; i++) {
                max_element = max(max_element, a[i]);
                if (a[i] == 0) {
                    zero_count += 1;
                    if (zero_count == 0) {
                        tp += max_element - 1;
                    }
                    else {
                        tp += max_element;
                    }
                    max_element = 0;
                }
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                max_element = max(max_element, a[i]); 
            }
            tp += max_element - 1;
        }

        cout << tp << endl;
    }
}