#include <iostream>
using namespace std;

int n, ans = -1;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = n / 5; i >= 0; i--)
    {
        int tmp = n - 5 * i;
        
        if (tmp % 2 == 0)
        {
            ans = i + (tmp / 2);
            break;
        }
    }

    cout << ans;
}