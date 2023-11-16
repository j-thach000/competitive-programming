#include "bits/stdc++.h"

/*
[takeaway]
recalling that indexes for elements in an array can represent something
using a calculation to refer to relevant elements

    // i is some utc time
    // j is iterating through from 9 - 18
    // check for base times in the test case to add to our sum
!!!!!!!!!!!!!!!
okay pick a utc time
convert to local base time by utc time + local base time
mod 24 the result
did we have a base time in the vector with that result to add employees to our sum?
!!!!!!!!!!!!!!!!!!!!!

----
looked at editorial
again, the main idea is to brute force since the input is small enough
    - 24 hours to search through
but i have literally no idea how to write it because it involves some sort of math model

common theme with all these questions is using % (mod) operator for a calculation
the idea is that if the time goes past 24 then the remainder of that number mod 24 is still the correct time

feels like a brain issue: memory too low to hold all these things in my head: please just write them out

---
N = number of bases
W = number of employees at said base
X = time at that base, how many hours ahead they are of UTC
    ex: X = 3, then 14 UTC means the meeting is held at 17 at that base's time
        so UTC time + x = local base's time

1 hour meetings must be held between 9-18 at the base's time
so basically:
(base's time) + (chosen UTC) % 24, if it's in the 9-18 range then add its people 

using this information:
1. have an array of length 24 with each index representing a possible UTC meeting
start time
2. each element in the array itself is how many people have that base time
3. getting answer:
    we iterate through the valid 9 hour window and see if ??????
---

spent at least like 2 hours trying to understand the problem intuitively and
still couldn't grok it wtf

---
few hours later
what is the problem asking: what's the max number of employees we can get on a 1 hour meeting throughout various timezones
basically we iterate through all the base times and iterating through 



// iterate through each utc time 
// brute force all valid times for each utc time (checking time period between 9 - 18)
// add the corresponding base's time employee count by referencing its index by converting utc to the base time (utc 1 - 9 + base time) % 24
THAT'S LITERALLY IT
main difficulty was just understanding the conversion between utc and base time intuitively in head

when is the meeting for the base's local time?
utc + base time
meeting held at 9 utc?
base time is 10?
9 + 10 = 19
can't participate

base time is 5?
9 + 5 = 14
can participate
*/

using namespace std;

int main() {
    // magic lines to make i/o faster, refer to https://stackoverflow.com/a/31165481 if you're curious why
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> cnt(24);
    for (int i = 0; i < n; i++) {
        int w, x;
        cin >> w >> x;
        cnt[x] += w; // w amount of people per possible x utc
    }
    int ans = 0;

    for (int i = 0; i < 24; i++) { // each utc time
        int sum = 0;
        for (int j = 0; j < 9; j++) { // valid window
            sum += cnt[(i+j) % 24];
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}