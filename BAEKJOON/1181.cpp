#include<iostream>
#include<algorithm>
using namespace std;

string words[20000];

int compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> words[i];
	}

	sort(words, words + n, compare);
	for (int i = 0; i < n; i++) {
		if (words[i] == words[i + 1]) continue;
		cout << words[i] << endl;
	}
}