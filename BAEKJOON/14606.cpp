#include <iostream>
#include <queue>
using namespace std;

queue<int> q;
int N, ans;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    q.push(N);

    while (!q.empty())
    {
        int A = q.front();
        q.pop();

        if (A == 1)
            continue;

        int B = A / 2 + (A % 2 == 1);
        int C = A / 2;
        ans += B * C;

        q.push(B);
        q.push(C);
    }

    cout << ans;
}