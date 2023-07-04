#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	int noW = 0;
	getline(cin, s);

	for (int i = 0; i < s.size(); i++)
		if (s[i] == ' ') noW++;
	if (s[0] == ' ') noW--;
	if (s[s.size() - 1] != ' ') noW++;

	cout << noW;
	return 0;
}