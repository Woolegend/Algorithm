#include<iostream>
#include<string>

using namespace std;

int main() {
	int n, s = 0, c, i;
	string N;

	cin >> N;
	for (i = 0; N[i] != NULL; i++) {
		s += N[i] - '0';
	}
	c = (i > 1);
	n = s;
	while (n >= 10) {
		s = 0;
		while (n) {
			s += n % 10;
			n /= 10;
		}
		c++;
		n = s;
	}
	cout << c << endl;
	if (!(n % 3))cout << "YES";
	else cout << "NO";
	return 0;
}