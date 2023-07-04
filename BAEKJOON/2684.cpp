#pragma warning(disable:4996)
#include<ios>
int main() { char c[41]; int n[8], s, t; scanf("%d", &t); while (t--) { scanf("%s", &c); for (int i = 0; i < 8; i++)n[i] = 0; for (int i = 0; i < 38; i++) { s = (c[i] == 'H') * 4 + (c[i + 1] == 'H') * 2 + (c[i + 2] == 'H'); n[s]++; }for (int i = 0; i < 8; i++)printf("%d ", n[i]); printf("\n"); } }