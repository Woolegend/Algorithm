#include<iostream>
using namespace std;

int main() {
	string m, d, t, mArr[12] = { 
		"January", "February", "March", "Apirl", 
		"May", "June", "July", "August", 
		"September", "October", "November", "Desember" };
	int y, hour, min, dSum = 0, per = 525600, dArr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	double sum, result;

	cin >> m >> d >> y >> t;
	if (y % 400 == 0 || (y % 4 == 0 && y % 100)) {
		dArr[1] = 29;
		per += 1440;
	}

	for (int i = 0; i < 11; i++) {
		if (m == mArr[i]) break;
		dSum += dArr[i];
	}

	if (d.size() == 3) dSum += (d[0] - '0') * 10 + d[1] - '0';
	else dSum += d[1] - '0';
	--dSum;
	
	hour = (t[0] - '0') * 10 + t[1] - '0';
	min = (t[3] - '0') * 10 + t[4] - '0';

	sum = dSum * 1440 + hour * 60 + min;

	result = (sum / per) * 100;

	cout << fixed;
	cout.precision(15);
	cout << result << endl;
}