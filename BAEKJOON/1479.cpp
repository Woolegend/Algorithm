#pragma warning(disable:4996)
#include<ios>

int main() {
	int E, S, M, y;
	scanf("%d %d %d", &E, &S, &M);
	for (int i = 0; i < 1000; i++) {
		y = 28 * i + S;
		if (y % 15 == E*(E!=15)) {
			if (y % 19 == M*(M!=19)) {
				printf("%d", y);
				break;
			}
		}
	}
}