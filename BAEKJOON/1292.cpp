#include<iostream>

using namespace std;

int main() {
	int s, e, sum = 0, n = 0, c = 0;

	cin >> s >> e;

	for (int i = 1; i <= e; i++) {
		if (!c) n++, c = n;
		if (i >= s) sum += n;
		c--;
	}
	cout << sum;
	return 0;
}