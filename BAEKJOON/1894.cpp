#pragma warning(disable:4996)
#include<ios>
using namespace std;
int main() {
	double x1, y1, x2, y2, x3, y3, x4, y4;
	while (scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4) != EOF) {
		if (x1 == x3 && y1 == y3) { swap(x1, x2); swap(y1, y2); }
		if (x1 == x4 && y1 == y4) { swap(x1, x2); swap(y1, y2); }
		if (x2 == x4 && y2 == y4) { swap(x3, x4); swap(y3, y4); }
		printf("%.3lf %.3lf\n", x1 + x4 - x2, y1 + y4 - y2);
	}
}