#include<iostream>

using namespace std;

int main() {
	string a, b;
	int gap, best;

	cin >> a >> b;

	best = a.size();

	for (int i = 0; i <= b.size() - a.size(); i++) {
		gap = 0;
		for (int j = 0; a[j]!=NULL; j++)
				if (a[j] != b[i + j]) gap++;
		if (best > gap) best = gap;
	}
	cout << best;
}