#include<iostream>
using namespace std;
int n, k, a[20], idx, m, u;
int main() {
	string s;
	cin >> n >> k >> s;
	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == ',') {
			if (m) a[idx] *= -1;
			m = 0, u = 0, idx++;
			continue;
		}
		else if (i == s.size()) {
			if (m) a[idx] *= -1;
		}
		else if (s[i] == '-') m = 1;
		else {
			if (u) a[idx] *= 10;
			a[idx] += s[i] - '0';
			u = 1;
		}
	}
	while(k--){
		n--;
		for (int j = 0; j < n; j++)
			a[j] = a[j+1] - a[j];
	}
	for (int i = 0; i < n; i++) {
		cout << a[i];
		if (i < n - 1) cout << ",";
	}
}
