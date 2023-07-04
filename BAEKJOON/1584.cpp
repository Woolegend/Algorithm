#include<iostream>
using namespace std;

int h = 0, b[501][501] = { 0, };

void search(int x, int y, int sum) {
	if (x > 500 || x < 0 || y > 500 || y < 0) return;
	if (b[y][x] == 2) return;
	if (b[y][x] == 1) sum++;
	search(x+1, y, sum);
	search(x-1, y, sum);
	search(x, y+1, sum);
	search(x, y+1, sum);
}

int main() {
	int n, m, x1, x2, y1, y2;
	cin >> n;
	while (n--) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = 0; i < y1; i++) {
			for (int l = 0; l < x1; l++) {
				b[y1][x1] = 1;
			}
		}
	}
	cin >> m;
	while (m--) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = 0; i < y1; i++) {
			for (int l = 0; l < x1; l++) {
				b[y1][x1] = 2;
			}
		}
	}
	search(0, 0, 0);
}

