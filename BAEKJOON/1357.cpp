#pragma warning(disable:4996)
#include<ios>

int Rev(int n) {
	int sum = 0;
	while (n) {
		sum *= 10;
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", Rev(Rev(x) + Rev(y)));
}