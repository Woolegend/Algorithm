#pragma warning (disable:4996)
#include<ios>
int n[10001], sum, num;
int main() {
	for (int i = 1; i < 10000; i++) {
		num = i, sum = 0;
		while (num) {
			sum += num % 10;
			num /= 10;
		}
		if(i+sum < 10001) n[i + sum]++;
	}
	for (int i = 1; i < 10001; i++) {
		if (!n[i]) printf("%d\n", i);
	}
}