#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int main() {
	int n;
	string s;
	set<string> str;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> s;
		str.insert(s);
	}

	for_each(s.begin(), s.end(), [](string i) {
		cout << i << endl;
	});
	return 0;
}