#include<iostream>

using namespace std;

class book {
public:
	int c, * next;
	string name;
	book(string s) {
		if (name.empty()) {
			c = 1;
			next = NULL;
			name = s;
		}
		else if (name == s) c++;
		else {
			next = new book(s);
		}
	}
};

int main() {
	int t;
	string b;

	cin >> t;

	for (int i = 0; i < t; i++) {

	}
	return 0;
}