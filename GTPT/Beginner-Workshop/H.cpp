#include "bits/stdc++.h"

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // alternating alice first, bob second
    // given some string, they can delete 2 different adjacent characters
    // determine if alice can win

    // calculate the total 0s and 1s in the input
    // if odd, alice wins
    // else bob wins

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        int zeroes = count(s.begin(), s.end(), '0');
        int ones = count(s.begin(), s.end(), '1');
        if (zeroes == ones) {
            if (zeroes % 2 == 0) cout << "NET" << '\n';
            else cout << "DA" << '\n';
        }
        else {
            if (min(zeroes, ones) % 2 == 0) cout << "NET" << '\n';
            else cout << "DA" << '\n'; 
        }
    }
    /*
    // throw input into vector
    // can alice or bob make a valid move
    // simulate by searching for 01 or 10 and deleting those chars
    // pass the turn

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        string s; cin >> s;
        bool legal_move = false;
        int player_turn = 0; // 0 for Alice, 1 for Bob
        vector<char> v;
        for (int i = 0; i < s.length(); i++) v.push_back(s[i]);
        for (int i = 0; i < s.length() - 1; i++) {
            if ((v[i] == 0 && v[i+1] == 1) || (v[i] == 1 && v[i+1] == 0)) {
                legal_move = true;
                v.erase(v.begin() + i, v.begin() + i + 2); // delete i and i+1 which should be 0 and 1
            }
            else {
                legal_move = false;
            }
        }
    } 
    */
}