#pragma warning(disable:4996)
#include<ios>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n-1; j++) {
			printf(" ");
		}
		printf("*");
		for (int j = 0; j < i; j++) {
			printf("**");
		}
		printf("\n");
	}
}