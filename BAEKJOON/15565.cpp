#include<iostream>

using namespace std;

int main() {
	int n, k, doll, * c, srt, sum = 0, idx = 0;

	cin >> n >> k;

	srt = n + 1;
	c = new int[n + 1] {0};

	for (int i = 0; i < n; i++) {

		cin >> doll;
		c[idx]++;

		if (doll == 1) {
			idx++;
			if (idx > k) {
				sum += c[idx - 1] - c[idx - k];
				if (sum < srt) srt = sum;
			}
			else if (idx == k) {
				for (int j = 1; j < k; j++)
					sum += c[j];
				srt = sum;
			}
		}
		
	}
	if (srt > n) srt = -2;
	cout << srt + 1;
	delete[] c;
	return 0;
}