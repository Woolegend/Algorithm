#include <iostream>
using namespace std;

int n, x1, y1, x2, y2, x3, y3, x4, y4, ans, a, b;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        a = (x2 - x1) * (y2 - y1);
        b = max((min(x2, x4) - max(x1, x3)), 0) * max((min(y2, y4) - max(y1, y3)), 0);
        ans = a - b;
        cout << ans << '\n';
    }
}