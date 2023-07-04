#include<iostream>
using namespace std;
int x, y, s, W = 0, B = 0;
string S[101];
void search(int a, int b, char c) {
	if (a < 0 || a >= x || b < 0 || b >= y) return;
	if (S[b][a] != c) return;
	s++;
	S[b][a] = 'O';
	search(a + 1, b, c);
	search(a - 1, b, c);
	search(a, b + 1, c);
	search(a, b - 1, c);
}
int main() {
	cin >> x >> y;
	for (int i = 0; i < y; i++) {
		cin >> S[i];
	}
	for (int i = 0; i < y; i++) {
		for (int l = 0; l < x; l++) {
			s = 0;
			search(l, i, 'W');
			W += s * s;
			s = 0;
			search(l, i, 'B');
			B += s * s;
		}
	}
	cout << W << " " << B;
}