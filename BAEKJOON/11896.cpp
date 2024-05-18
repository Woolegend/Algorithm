#include <iostream>
using namespace std;

unsigned long long a, b, ans;

int main()
{
    cin >> a >> b;

    if (a % 2) a += 1;
    if (a < 4) a = 4;
    if (b % 2) b -= 1;

    if(a > b) ans = 0;
    else ans = ((b - a) / 2 + 1) * ((a + b) / 2);

    cout << ans;
}