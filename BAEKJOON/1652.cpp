#include<iostream>

using namespace std;

int main() {
	int n, l = 0, h = 0;
	string* s;

	cin >> n;

	s = new string[n];
	
	for (int i = 0; i < n; i++)
		cin >> s[i];

	if (n != 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (s[i][j] == '.' && s[i][j + 1] == '.') {
					l++;
					while (s[i][j] == '.' && j < n - 1) j++;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - 1; j++) {
				if (s[j][i] == '.' && s[j + 1][i] == '.') {
					h++;
					while (s[j][i] == '.' && j < n - 1) j++;
				}	
			}
		}
	}
	cout << l << " " << h;
	delete[] s;
	return 0;
}
