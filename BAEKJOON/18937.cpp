#include<iostream>
using namespace std;
int n, v, sum = 0;
string s;
void A() { cout << (s == "Whiteking" ? "Whiteking" : "Blackking"); }
void B() { cout << (s == "Whiteking" ? "Blackking" : "Whiteking"); }
int main(){
	cin >> n;
	while (n--) {
		cin >> v;
		sum ^= v - 2;
	}
	cin >> s;
	sum ? A() : B();
}