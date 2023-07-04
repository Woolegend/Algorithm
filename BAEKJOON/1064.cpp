#pragma warning(disable:4996)
#include<stdio.h>
#include<math.h>

int main() {
	double x[3], y[3], l[2], sum, max = 0, min = 10000000;
	scanf("%lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);
	x[0] -= x[2], y[0] -= y[2];
	x[1] -= x[2], y[1] -= y[2];
	x[2] = y[2] = 0;
	if (x[0] == 0 && x[1] == 0) printf("-1.0");
	else if (y[0] == 0 && y[1] == 0) printf("-1.0");
	else {
		if (y[0] * x[1] == y[1] * x[0]) printf("-1.0");
		else {
			for (int i = 0; i < 3; i++) {
				l[0] = sqrt(
					pow(x[(1 + i) % 3] - x[(0 + i) % 3], 2) +
					pow(y[(1 + i) % 3] - y[(0 + i) % 3], 2));
				l[1] = sqrt(
					pow(x[(2 + i) % 3] - x[(0 + i) % 3], 2) +
					pow(y[(2 + i) % 3] - y[(0 + i) % 3], 2));
				sum = (l[0] + l[1]) * 2;
				if (max < sum) max = sum;
				if (min > sum) min = sum;
			}
			sum = max - min;
			printf("%.20lf", sum);
		}
	}
}
