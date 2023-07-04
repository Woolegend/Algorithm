#include<iostream>

using namespace std;

int main(){
	string* s;
	int t;
	cin >> t;

	s = new string[t+1];

	for (int i = 1; i < t + 1; i++) 
		cin >> s[i];

	s[0] = s[1];
	for (int i = 1; i < t+1; i++) {
		for (int j = 0; j < s[i].size(); j++) {
			if (s[0][j] != s[i][j]) s[0][j] = '?' ;
		}
	}
	cout << s[0] << endl;
	delete[] s;
	return 0;
}