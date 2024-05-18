#include<iostream>
using namespace std;

int map[999][999];
int dir_x[] = {0, 1, 0, -1};
int dir_y[] = {1, 0, -1, 0};
int n, t, x, y, v, ans_x, ans_y;	

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> t;
	ans_x = ans_y = x = y = n / 2;
	map[x][y] = v = 1;
	for (int i = 1; i <= n / 2; i++) {
		x--; y--;
		int len = i * 2;
		int seq = 0;
		int idx = 0;
		while(idx < 4){
			v++;
			seq++;
			x += dir_x[idx];
			y += dir_y[idx];
			map[x][y] = v;
			if(v == t) ans_x = x, ans_y = y;
			if(seq == len) idx++, seq = 0;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << map[i][j] << ' ';
		}
		cout <<'\n';
	}
	cout << ans_x + 1<< ' ' << ans_y + 1 << '\n';
}