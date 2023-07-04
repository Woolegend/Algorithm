#include<iostream>
using namespace std;
int a[4], b[4], t, m = -1, rst;
string s, slt;
int main() {
	cin >> s >> t;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'L') a[0]++;
		else if (s[i] == 'O') a[1]++;
		else if (s[i] == 'V') a[2]++;
		else if (s[i] == 'E') a[3]++;
	}
	while (t--) {
		cin >> s;
		b[0] = b[1] = b[2] = b[3] = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'L') b[0]++;
			else if (s[i] == 'O') b[1]++;
			else if (s[i] == 'V') b[2]++;
			else if (s[i] == 'E') b[3]++;
		}
		rst = ((a[0] + b[0] + a[1] + b[1])
			* (a[0] + b[0] + a[2] + b[2])
			* (a[0] + b[0] + a[3] + b[3])
			* (a[1] + b[1] + a[2] + b[2])
			* (a[1] + b[1] + a[3] + b[3])
			* (a[2] + b[2] + a[3] + b[3]) % 100);
		if (rst >= m) {
			if (rst == m) {
				slt = slt < s ? slt : s;
			}
			else slt = s;
			m = rst;
		}
	}
	cout << slt;
}