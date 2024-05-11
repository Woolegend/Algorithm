#include <iostream>
using namespace std;

int main()
{
    int d1, d2;
    double ans, PI = 3.141592;
    
    cin >> d1 >> d2;

    ans = 2 * d1 + 2 * d2 * PI;

    cout << fixed;
    cout.precision(6);
    cout << ans;
}