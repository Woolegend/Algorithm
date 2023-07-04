#pragma warning(disable:4996)
#include<ios>
int n, m;
void g(int b, int a) {
	int s = b * 10 + a;
	if (s <= n) {
		g(s, 4);
		g(s, 7);
		if(m < s) m = s;
	}
}
int main() {
	scanf("%d", &n);
	g(0, 4);
	g(0, 7);
	printf("%d", m);
}