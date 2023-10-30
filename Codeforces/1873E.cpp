#include "bits/stdc++.h"

using namespace std;

void solve() {
	// main idea is to binary search through all possible heights for the optimization
	int n, x; // num of elements in array, water
	cin >> n >> x;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	long long low = 0;
	long long high = 2000000001;
	long long ans = 0;
	while (high - low > 1) { // if the difference between the heights is > 1 then there's still heights to try
		long long mid = (high + low) / 2; // height to try, does it maximize our water usage
		long long sum = 0;
		for (int i = 0; i < n; i++) {
			sum += max(0LL, mid - a[i]);
		}
		if (sum > x) {
			high = mid;
		}
		else {
			low = mid;
			ans = max(ans, mid);
		}
	}
	cout << ans << endl;
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