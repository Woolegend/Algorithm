#include <iostream>
using namespace std;
#define ll long long

ll arr[81], input, ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> input;

    arr[1] = 1;

    if (input == 1)
        ans = 4;
    else
    {
        for (int i = 2; i <= input; i++)
        {
            arr[i] = arr[i - 1] + arr[i - 2];
        }
        ans = (2 * arr[input] + arr[input-1]) * 2;
    }
    cout << ans;
}