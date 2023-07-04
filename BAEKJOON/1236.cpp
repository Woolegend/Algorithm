#include<iostream>

using namespace std;

int main() {
	int* hi, * lo, h, l, hc, lc;
	char x;

	cin >> h >> l;
	hi = new int[h] {0};
	lo = new int[l] {0};
	hc = h; lc = l;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < l; j++) {
			cin >> x;
			if (x == 'X') {
				if (!hi[i]) hi[i]++, hc--;
				if (!lo[j]) lo[j]++, lc--;
			}
		}
	}

	cout << (hc > lc ? hc : lc);

	delete[] hi;
	delete[] lo;
	return 0;
}