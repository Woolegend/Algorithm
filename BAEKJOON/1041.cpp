#include<ios>

#pragma warning(disable:4996);

int main() {
	unsigned long long n, sum = 0, mx = 0, m1 = 50, m2 = 100, m3 = 150, face[6];
	 
	scanf("%llu", &n);
	for (int i = 0; i < 6; i++) {
		scanf("%llu", &face[i]);
		if (m1 > face[i]) m1 = face[i];
	}
	if (n == 1) {
		for (int i = 0; i < 6; i++) {
			if (mx < face[i]) mx = face[i];
			sum += face[i];
		}
		sum -= mx;
	}
	else{
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (i == j || i + j == 5) continue;
				if (face[i] + face[j] < m2) m2 = face[i] + face[j];
			}
		}
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				for (int l = 0; l < 6; l++) {
					if (i == j || i + j == 5 ||
						i == l || i + l == 5 ||
						j == l || j + l == 5) continue;
					if (face[i] + face[j] + face[l] < m3) m3 = face[i] + face[j] + face[l];
				}
			}
		}
		sum = m3 * 4 + m2 * 4 * (n * 2 - 3) + m1 * (n - 2) * (n * 5 - 6);
	}
	printf("%llu", sum);
	return 0;
}