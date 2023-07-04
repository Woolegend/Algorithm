#include<stdio.h>
#include<map>

#pragma warning(disable:4996);
long long n, p, q;
std::map<long long, long long> m;

long long seq(long long n) {
	if (!n) return 1;
	else if (m.find(n) != m.end()) return m[n];
	long long v = seq(n / p) + seq(n / q);
	m.insert({n, v});
	return m[n];
}

int main() {
	scanf("%lld %lld %lld", &n, &p, &q);
	printf("%lld", seq(n));
	return 0;
}