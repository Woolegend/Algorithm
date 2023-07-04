#include<iostream>

using namespace std;

int main() {
	int n[5], best = 1000000, num, c;
	for (int i = 0; i < 5; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < 5; i++) {
		c = 3;
		for (int j = 1; c > 0; j++) {
			c = 3;
			num = n[i] * j;
			if (num % n[0] == 0) c--;
			if (num % n[1] == 0) c--;
			if (num % n[2] == 0) c--;
			if (num % n[3] == 0) c--;
			if (num % n[4] == 0) c--;
		}
		if (num < best) best = num;
	}
	cout << best;
	return 0;
}

