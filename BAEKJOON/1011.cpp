#include<iostream>
#include<math.h>

using namespace std;


int main() {
	int t, x, y, d, s, k;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x >> y;
		d = y - x;
		k = 1;
		while(k < sqrt(d)) k++;
		s = (k - 1) * k;
		cout << k * 2 - 1 - (sqrt(d) <= sqrt(s)) << endl;
	}
	return 0;
}