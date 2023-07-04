#include<iostream>

using namespace std;

int main() {
	long long f, n, c = 0;

	cin >> f >> n;

	if (n) {
		c = 5;
		n--;
		if (f == 1) {
			c += (n * 8) + 3;
		}
		else if (f == 5) {
			c += (n * 8) + 7;
		}
		else {
			if (n % 2) {
				c += n * 4 + f - 2;
			}
			else {
				c += (n * 4) + (4 - f);
			}
		}
	}
	else {
		c = f - 1;
	}
	cout << c;

	return 0;
}