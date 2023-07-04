#include<iostream>

using namespace std;

int main() {
	int n;

	cin >> n;

	int* c;
	c = new int[n + 1];

	c[0] = 1;
	c[1] = 3;
	for (int i = 2; i < n + 1; i++) {
		c[i] = (c[i - 1] * 2 + c[i - 2]) % 9901;
	}
	cout << c[n] << endl;
	delete[]c;
	return 0;
}