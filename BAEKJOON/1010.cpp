#include<iostream>

using namespace std;

//동적 계획법
//한 번 출력 된 결과를 저장하여
//동일한 조건이 왔을때 계산을 생략한다.
int memo[31][31] = {0};

int f(int a, int b, int n) {
	int c = 0;
	if (memo[a][b]) return memo[a][b];
	if (!a || !b) return 1;
	else {
		memo[a][b] = f(a - 1, b, c) + f(a, b - 1, c);
	}
	return memo[a][b];
}

int main() {
	int t, m, n, c;
	cin >> t;
	for (int i = 0; i < t; i++) {
		c = 0;
		cin >> n >> m;
		cout << f(n, m - n, 0) << endl;
	}
	return 0;
}