#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int n, k, c, tn, a = 0;
	cin >> n >> k;

	while (1) {
		c = 0;
		tn = n;
		while (tn) {
			if (tn % 2) c++;
			tn /= 2;
		}
		if (c <= k) break;
		n++;
		a++;
	}
	cout << a;

	return 0;
}


/*
int main() {
	int a, b, c = 0;

	cin >> a >> b;

	if (b == 0) { cout << -1; }
	else {
		for (int i = 0; i < b; i++) {
			c = 0;
			while (pow(2, c) <= a) c++;
			if (i == b - 1) break;
			a -= pow(2, c - 1);
			if (a == 0) break;
		}
		if (a) cout << pow(2, c) - a << endl;
		else cout << 0;
	}
	return 0;
}
*/