#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double d, h, w, r;
	cin >> d >> h >> w;
	r = d / sqrt(h * h + w * w);
	h *= r, w *= r;
	cout << int(h) << " " << int(w);
	return 0;
}