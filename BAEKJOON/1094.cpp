#include<iostream>

using namespace std;

int main() {
	int x, i = 0, c = 0, sum = 0;
	int n[7] = { 64, 32, 16, 8, 4, 2, 1 };

	cin >> x;
	
	for (int i = 0; sum != x; i++) {
		if (sum + n[i] <= x){
			sum += n[i];
			c++;
		}
	}

	cout << c;
	return 0;
}