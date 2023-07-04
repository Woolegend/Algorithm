#include<iostream>

using namespace std;

int main() {
	int t, g, * n, flag, mod, *m, idx;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> g;
		n = new int[g];
		m = new int[g];
		flag = 1;

		for (int j = 0; j < g; j++)
			cin >> n[j];

		for (idx = 1; flag; idx++) {
			flag = 0;
			for (int j = 0; j < g; j++) {
				mod = n[j] % idx;
				for (int l = 0; l < j; l ++) {
					if (m[l] == mod) { flag = 1; break; }
				}
				if (flag) break;
				m[j] = mod;
			}
		}
		cout << --idx << endl;
		delete[] m;
		delete[] n;
	}
	return 0;
}