#include<iostream>
#include<cmath>
using namespace std;
int aph[26];
int main() {
	string s;
	int result;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		aph[s[i] - 'a']++;
	}
	
}