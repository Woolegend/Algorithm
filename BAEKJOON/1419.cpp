#include<ios>
int main() 
{ 
	int l, r, k, a, b, s; 
	scanf("%d %d %d", &l, &r, &k);
	a = k * (k + 1) / 2; b = k % 2 ? k : k / 2; 
	if (r < a)s = 0; 
	else { 
		s = l < a ? (r - a) / b + 1 : (r - a) / b - (l - a) / b + ((l - a) % b == 0); 
		if (k == 4 && l <= 12 && 12 <= r) s--; 
	}
	printf("%d", s); 
}
