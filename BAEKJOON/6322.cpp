#include <iostream>
#include <cmath>
using namespace std;

float a, b, c;

int main()
{
    cout << fixed;
    cout.precision(3);

    for (int i = 1; true; i++)
    {
        cin >> a >> b >> c;

        if(a == 0 && b == 0 && c== 0) break;

        cout << "Triangle #" << i << '\n';
        if (c == -1)
        {
            c = sqrt(pow(a, 2) + pow(b, 2));
            cout << "c = " << c << "\n\n";
        }
        else
        {
            if (a == -1)
            {
                a = sqrt(pow(c, 2) - pow(b, 2));

                if (a + b > c)
                {
                    cout << "a = " << a << "\n\n";
                }
                else
                {
                    cout << "Impossible.\n\n";
                }
            }
            else
            {
                b = sqrt(pow(c, 2) - pow(a, 2));

                if (a + b > c)
                {
                    cout << "b = " << b << "\n\n";
                }
                else
                {
                    cout << "Impossible.\n\n";
                }
            }
        }
    }
}