#include<iostream>

using namespace std;

int main() {
	char** c, a;
	int n, m, flag = 0;
	cin >> n >> m;
	c = new char* [n + 1];
	for (int i = 0; i < m; i++)
		c[i] = new char[m + 1];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> c[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m*2; j++) {
			cin >> a;
			if (a != c[i][j / 2]) {
				flag = 1;
				break;
			}
		}
		if (flag) break;
	}
	if (flag) cout << "Not ";
	cout << "Eyfa";
	return 0;
}