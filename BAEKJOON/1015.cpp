#include<stdio.h>

int combination(int a, int b) {
    int res = 1;
    for (int i = 1; i <= a; i++) {
        res *= i;
    }
    for (int i = 1; i <= b; i++) {
        res /= i;
    }
    for (int i = 1; i <= a - b; i++) {
        res /= i;
    }
    return res;
}

int main() {
    int n, m, k, sum1, sum2 = 0;
    double result;

    scanf("%d %d %d", &n, &m, &k);
    sum1 = combination(n, m);
    for (int i = 0; i < k; i++) {
        sum2 += combination(m, i) * combination(n - m, m - i);
    }

    result = ((double)sum1 - sum2) / sum1;
    printf("%.10f \n", result);
}

