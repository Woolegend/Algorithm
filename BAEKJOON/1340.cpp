#include<iostream>
using namespace std;

string month;
string arr[] = 
{"January", "February", "March", "April", "May", "June", 
"July", "August", "September", "October", "November", "December"};

int day, year, hour, minute; 
int m_day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

double sum, ans, all = 525600;

int main(){
	cin >> month;
	scanf("%d, %d %d:%d", &day, &year, &hour, &minute);

	if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
		m_day[1]++;
		all += 1440;
	}

	for(int i = 0; month != arr[i]; i++)
		sum += m_day[i];

	sum = ((sum + day - 1) * 24 + hour) * 60 + minute;
	ans = (sum / all) * 100;

	printf("%.10f", ans);
}