#include <iostream>
using namespace std;

int input[3], maxLength, sumLength;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while (true)
    {
        maxLength = 0;
        sumLength = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> input[i];
            if (maxLength < input[i])
                maxLength = input[i];
            sumLength += input[i];
        }
        if (sumLength == 0)
            break;

        if (maxLength * 2 >= sumLength)
            cout << "Invalid\n";
        else if ((input[0] == input[1]) && (input[1] == input[2]))
            cout << "Equilateral\n";
        else if ((input[0] == input[1]) || (input[1] == input[2]) || (input[2] == input[0]))
            cout << "Isosceles\n";
        else
            cout << "Scalene\n";
    }
}