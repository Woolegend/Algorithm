#include<iostream>

using namespace std;

int main() {
	int n, i = 0 , sum = 0;

	cin >> n;

	while(sum<n){
		i++;
		sum += i;
	}
	
	if (i % 2) cout << 1 - n + sum << "/" << i - sum + n;
	else cout << i + n - sum << "/" << 1 + sum - n;

	return 0;
}