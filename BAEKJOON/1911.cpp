#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, L, len, *S, *E, A = 0, s = 0, c;

	cin >> N >> L;
	S = new int[N];
	E = new int[N];

	for (int i = 0; i < N; i++)
		cin >> S[i] >> E[i];

	sort(S, S + N);
	sort(E, E + N);

	for (int i = 0; i < N; i++) {
		if (S[i] > s) s = S[i];
		len = E[i] - s;
		c = (len + L - 1) / L;
		A += c;
		s += c * L;
	}

	cout << A;

	delete[] S;
	delete[] E;

	return 0;
}