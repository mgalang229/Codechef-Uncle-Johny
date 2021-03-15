#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int k;
		cin >> k;
		// create a 'song_length' variable to store the length of Uncle Johny Song
		int song_length = 0;
		for (int i = 0; i < n; i++) {
			if (i + 1 == k) {
				// if the index + 1 is equal to the k-th position then store the value
				song_length = a[i];
			}
		}
		// sort the array in non-decreasing order
		sort(a.begin(), a.end());
		// create a 'position' variable to hold the new index of the Uncle Johny song
		int position = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] == song_length) {
				// if the value matches the 'song_length' then store the position
				// also, break the loop since there's no need to iterate the whole list
				position = i + 1;
				break; 
			}
		}
		cout << position << '\n';
	}
	return 0;
}
