#include <iostream>

int n;
unsigned long long arr[91];

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    std::cin >> n;

    arr[1] = 1;

    if (n > 1)
    {
        for (int i = 2; i <= n; i++)
        {
            arr[i] = arr[i - 2] + arr[i - 1];
        }
    }

    std::cout << arr[n];
}