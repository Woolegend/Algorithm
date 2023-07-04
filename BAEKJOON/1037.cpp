#include<iostream>

using namespace std;

int main() {
	int a, n, m = 0, l = 1000000;

	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> n;
		if (n > m) m = n;
		if (n < l) l = n;
	}
	if (a == 1) cout << n * n;
	else cout << m * l;

	return 0;
}