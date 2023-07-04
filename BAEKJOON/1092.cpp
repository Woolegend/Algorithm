#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int sn, wn, * ship, *div, w, t;

	cin >> sn;

	ship = new int[sn]; 
	div = new int[sn] {0};

	for (int i = 0; i < sn; i++)
		cin >> ship[i];

	sort(*ship, *ship+sn);

	cin >> wn;

	for (int i = 0; i < wn; i++) {
		cin >> w;
		if (w > ship[sn - 1]) {
			t = -1;
			break;
		}
		for (int j = 0; j < sn; j++) {
			if (w <= ship[j]) {
				div[j]++;
				break;
			}
		}
	}
	cout << t;
	delete[] ship;
	delete[] div;
	return 0;
}