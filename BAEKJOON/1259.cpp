#include<iostream>
using namespace std;
int main() {
	string s;
	int f;
	while (1) {
		f = 1;
		cin >> s;
		if (s == "0") break;
		for (int i = 0; i < s.size() / 2; i++) {
			if (s[i] != s[s.size() - 1 - i]) {
				f = 0;
				break;
			}
		}
		if (f) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}