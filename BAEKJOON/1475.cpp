#include<iostream>

using namespace std;

int main() {
	string num;
	int cnt[10] = {0};
	int n = 0, idx;

	cin >> num;

	for (int i = 0; num[i] != NULL; i++) {
		idx = num[i] - '0';
		cnt[idx]++;
	}
	cnt[6] = (cnt[6] + cnt[9] + 1) / 2;

	for (int i = 0; i < 9; i++) {
		if (cnt[i] > n) n = cnt[i];
	}
	cout << n;

	return 0;
}