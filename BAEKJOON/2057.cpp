#include<iostream>

using namespace std;

int main() {
	unsigned long long num, fact[21];
	for (int i = 0; i <= 20; i++) {
		fact[i] = 1;
		for (int j = 1; j <= i; j++) {
			fact[i] *= j;
		}
	}
	cin >> num;
	if (!num) {
		cout << "NO";
		return 0;
	}

	for (int i = 20; 0 <= i; i--) {
		if (!num) break;
		if (num >= fact[i]) num -= fact[i];
	}
	if (!num) cout << "YES";
	else cout << "NO";

	return 0;
}