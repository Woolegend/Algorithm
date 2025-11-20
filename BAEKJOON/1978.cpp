#include<iostream>
#include<cmath>
using namespace std;

/**!SECTION
 * 자연수 N에 대한 소수 판별 시 
 * sqrt(N)까지만 판별하는 이유는 다음과 같다.
 * - N = A * B로 표현할 수 있다.
 * - N = sqrt(N) * sqrt(N)이다.
 * - A = sqrt(N)이면 B = sqrt(N)이다.
 * - 만약 A < sqrt(N)이면 B > sqrt(N)이다.
 * - 만약 B < sqrt(N)이면 A > sqrt(N) 이다.
 * 결론적으로 N의 약수는 항상 짝을 이루기 때문에 
 * sqrt(N)보다 작은 약수가 반드시 하나 존재한다.
 * 이를 **약수의 대칭성**이라고 한다.
 */
bool isPrime(int n){
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, ans = 0;
	cin >> n;
    while(n--){
		cin >> m;
		if(m != 1 && isPrime(m)) ans++;
	}
	cout << ans << '\n';
}