#pragma warning(disable:4996)
#include <ios>
int a[2001], n, v;
int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        a[v + 1000]++;
    }
    for (int i = 0; i < 2001; i++) {
        for (int j = 0; j < a[i]; j++) printf("%d\n", (i - 1000));
    }
}