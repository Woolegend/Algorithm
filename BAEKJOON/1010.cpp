#include<iostream>
using namespace std;

int memo[31][31] = {0};

int f(int a, int b, int n) {
	int c = 0;
	if (memo[a][b]) return memo[a][b];
	if (!a || !b) return 1;
	else {
		memo[a][b] = f(a - 1, b, c) + f(a, b - 1, c);
	}
	return memo[a][b];
}

int main() {
	int t, m, n, c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		c = 0;
		cin >> n >> m;
		cout << f(n, m - n, 0) << endl;
	}
	return 0;
}