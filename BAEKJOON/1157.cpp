#include<iostream>

using namespace std;

int main() {
	string s;
	int aph[26] = {0,}, b = 0, flag = 0, c;

	cin >> s;

	for (int i = 0; s[i] != NULL; i++) {
		if (s[i] < 91) aph[s[i] - 65]++;
		else aph[s[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (aph[i] > b) b = aph[i];
	}
	for (int i = 0; i < 26; i++) {
		if (aph[i] == b) {
			if (flag) {
				cout << '?' ;
				return 0;
			}
			c = i;
			flag = 1;
		}
	}
	cout << char(c + 65);
	return 0;
}