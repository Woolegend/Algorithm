#include<iostream>
using namespace std;

int main() {
	int n, r, c, s = 0;
	cin >> n >> r >> c;
	for(n = 1 << n - 1; n ; n /= 2){
		if (c >= n) {
			s += n * n;
			c -= n;
		}
		if (r >= n) {
			s += n * n * 2;
			r -= n;
		}
	}
	cout << s;
}