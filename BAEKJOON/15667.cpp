#include <iostream>
#include <cmath>
using namespace std;

int N, K;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    K = sqrt(float(N));
    cout << K;
    return 0;
}