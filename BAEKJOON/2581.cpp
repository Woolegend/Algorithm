#include<ios>
#include<cmath>
#pragma warning(disable:4996);

int main() {
	int m, n, min = 0, sum = 0, flag;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		if (i == 1) continue;
		flag = 1;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			if (!min) min = i;
			sum += i;
		}
	}
	if (min) printf("%d\n%d", sum, min);
	else printf("-1");
}